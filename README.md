<h1>Linear Regression for Price Prediction Based on Area (C)</h1> 
<h3>A basic overview of the project</h3>
This project implements a Linear Regression model in C programming language to predict the price of a property based on its area (in square meters). The program allows users to input a series of data points (area and price), computes the regression line (y = mx + b), and then predicts the price for a given area using the regression formula.

The code is designed to:

Collect data points (area and price).
Calculate the best-fit line (linear regression) using the least-squares method.
Predict the price for a given area based on the calculated regression line.

<h3>Some of the features of the project</h3>
Data Input: Users can input multiple data points representing area and price.
Data Display: Displays the entered area and price data in a structured format.
Linear Regression Calculation: The program computes the slope (m) and intercept (b) of the regression line using the least-squares method.
Price Prediction: Given an area (in square meters), the program predicts the corresponding price using the linear regression model.

<h3>How the program is working</h3>
get() Function: Collects the number of instances (data points) and the corresponding area and price values from the user.
display() Function: Displays the entered data in a tabular format, showing the area and price.
Calculate() Function: Computes the regression coefficients (slope m and intercept b) using the least-squares formula:
m = (Σ(xi - x̄)(yi - ȳ)) / Σ(xi - x̄)² for the slope.
b = ȳ - m * x̄ for the intercept.
Predict() Function: Takes a given area and computes the predicted price using the equation y = mx + b.
