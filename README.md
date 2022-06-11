# Grocery-Checkout-System

A simple application to handle scanning items at a supermarket.
The Grocery-Checkout-System system will calculate the total price for the items being purchased. For this system we’ll use string descriptions with no spaces (e.g., ‘apples’, ‘bananas’, etc.).
Items have a unit cost (‘an apple cost 50¢’ depected as "apple quanity price" in the input file) and some items have a special price (‘three apples cost 
$1.30’ depected as "apples quanity special price" in the input file). Today’s pricing rules are as follows:
Item Single Item Cost Special Price!
apples 40¢ 3 for 90¢
bananas 75¢ 10 for $6.00
coconuts $2.00 2 for $3.00
donuts $0.50
The checkout system will accept the items being scanned in any order.
Pricing information can change often, so the checkout system needs to accept pricing rules in a 
reasonable fashion.
The top-level use of the system should look something like this (in pseudo-code):
Checkout co( pricingRules );
co.scan( “apples” );
co.scan( “donuts” );
co.scan( “bananas” );
etc.
Price = co.total;
