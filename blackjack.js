alert("Black Jack - Game 1")

var dealer = Math.floor(Math.random() * 21 ) + 2
var player = Math.floor(Math.random() * 11 ) + 1

alert("Your card number is: " + player)

function play ()
{
    var reply = prompt("Would you like to be dealt another card? (y/n)")

    if (reply == "y")
    {
            var player2 = Math.floor(Math.random() * 11 ) + 1

            var total = player + player2

            alert("Your cards total is: " + total)

        if (total < 21)
        {
            var cont = prompt("Would you like to be dealt another card (y) or stay (n)?")

            if (cont == "y")
            {
                var player3 = Math.floor(Math.random() * 11 ) + 1

                grand_total = total + player3

                if (grand_total > 21 || grand_total < dealer)
                {
                    alert("You lose!")
                }

                else if (grand_total > dealer)
                {
                    alert("You beat the dealer, you won!")
                }

                else if (grand_total = dealer)
                {
                    alert("You and the dealer have the same number, it's a tie!")
                }
            }

            else
            {

                if (grand_total > 21 || grand_total < dealer)
                {
                    alert("You lose!")
                }

                else if (grand_total > dealer)
                {
                    alert("You beat the dealer, you won!")
                }

                else if (grand_total = dealer)
                {
                    alert("You and the dealer have the same number, it's a tie!")
                }
            }

        }
    }

    else
        {
            if (player > 21 || grand_total < dealer)
                {
                    alert("You lose!")
                }

                else if (player > dealer)
                {
                    alert("You beat the dealer, you won!")
                }

                else if (player = dealer)
                {
                    alert("You and the dealer have the same number, it's a tie!")
                }

            alert("Thanks for playing!")
        }
};

play();