/* This program asks the user for two integers and executes a mathematical operation. Then, it displays the result in a new window.*/

 

var x = prompt("Enter an integer");

var y = prompt("Enter another integer");                                                                                                                                        

var operator = prompt("What mathematical function would you like to execute? (i.e. add, subtract, multiply, divide)")

function operation()

{

        switch (operator)

                {

                        case "multiply": 

                        return (x * y)

                        break;

 

                        case "divide": 

                        return (x / y)

                        break;

 

                        case "add": 

                        return (parseInt(x) + parseInt(y))

                        break;

 

                        case "subtract": 

                        return (x - y)

                        break;

 

                        default:

                        break;

                }

}

console.log("The result is: " + operation (x,y))
