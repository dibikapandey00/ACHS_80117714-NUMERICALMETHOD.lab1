//Compare various method for solving non-linear equation in terms of speed, accuracy and ease  of coding. 




1. Newton-Raphson Method
Speed:
Fast convergence when close to the root, with quadratic convergence.

Accuracy:
High accuracy if the initial guess is close to the actual root.

Ease of Coding:
Moderately easy to code. Requires the derivative of the function.



2. Bisection Method
Speed:
Slower convergence (linear convergence) compared to other methods.

Accuracy:
Consistently converges, but may require many iterations.

Ease of Coding:
Very easy to implement. Does not require the derivative of the function.



3. Secant Method
Speed:
Faster than Bisection, but slower than Newton-Raphson.

Accuracy:
Less accurate than Newton-Raphson, but does not require the derivative.

Ease of Coding:
Easy to code. Uses two initial guesses instead of one.



4. Fixed-Point Iteration
Speed:
Generally slow convergence (linear convergence).

Accuracy:
Convergence depends on the function transformation.

Ease of Coding:
Very easy to implement. Requires transforming the equation into fixed-point form.



5. Gradient Descent Method
Speed:
Speed can vary; requires a suitable learning rate.

Accuracy:
Can converge to a local minimum which is not necessarily the root.

Ease of Coding:
Moderately easy to implement. Requires the gradient of the function.

Summary Table:
Method	                 Speed	       Accuracy	            Ease of Coding
Newton-Raphson	           Fast	         High	               Moderate
Bisection                  Slow          Consistent            Very Easy
Secant	                 Moderate	 Moderate	       Easy
Fixed-Point Iteration	   Slow	         Dependent	       Very Easy
Gradient Descent	 Variable	 Variable	       Moderate
