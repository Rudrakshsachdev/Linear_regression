#include <stdio.h>

void get(int *num, float area[], float price[]);

void display(int num, float area[], float price[]);

void Calculate(int num, float area[], float price[], float *m, float *b);

float Predict(float m, float area, float b);

int main()
{
    int n;
    float area[100], price[100];

    float m, b;
    float test_area;
    float predicted_price;

    get(&n, area, price);

    display(n, area, price);

    Calculate(n, area, price, &m, &b);

    printf("The regression line equation is y = %fx + %f\n", m, b);

    printf("Input the area(in sq meters) for which you want to predict the price:\n");
    scanf("%f", &test_area);

    predicted_price = Predict(m, test_area, b);

    printf("The predicted price for the %f area is %f\n", test_area, predicted_price);

    return 0;
}

void get(int *num, float area[], float price[])
{
    int i;

    printf("Input the number of instances:\n");
    scanf("%d", num);

    for (i = 0; i < *num; i++)
    {
        printf("Input the area(in sq meters) and price for %d instance:\n", i + 1);
        scanf("%f%f", &area[i], &price[i]);
    }
}

void display(int num, float area[], float price[])
{
    int i;

    printf("                           Entered data\n");
    printf("                  _____________________________________\n");
    printf("                            Area\tPrice\n");

    for (i = 0; i < num; i++)
    {
        printf("                            %f\t%f\n", area[i], price[i]);
    }
}

void Calculate(int num, float area[], float price[], float *m, float *b)
{
    int i;
    float sum_y = 0.0;

    float sum_x = 0.0;
    float sum_x2 = 0.0;

    float mean_x;
    float mean_y;

    for (i = 0; i < num; i++)
    {
        sum_x += area[i];  // it is adding the sum of areas in dataset!
        sum_y += price[i]; // it is adding the sum of price in the dataset!

        sum_x2 += area[i] * area[i]; // it is addding the square of sum in dataset!
    }

    mean_x = sum_x / num; // it is calculating the summation of xi
    mean_y = sum_y / num; // it is calculating the summation of yi

    float numera = 0.0;
    float deno = 0.0;

    for (i = 0; i < num; i++)
    {
        numera += (price[i] - mean_y) * (area[i] - mean_x);       //it is telling us that how area and price from their respective means are related

        deno += (area[i] - mean_x) * (area[i] - mean_x);          // representing variance of area values!
    }

    *m = numera / deno;

    *b = mean_y - (*m) - mean_x;
}

float Predict(float m, float area, float b)
{
    return m * area + b;
}