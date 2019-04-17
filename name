var name = prompt("Please type in your name.")

function new_name ()
{
    // individual changes to the string 

    //reverses string
    
    document.write("Reversed: ")
    for (var i = name.length-1; i >= 0; i--)
            {
                    document.write(name[i])
            }

    document.write("<br />" + "<br />")
    
    //asterisks replacement

    var repl = name.replace(/a|e|i|o|u|y|A|E|I|O|U|Y/gi,"*")

    document.write("Asterisks: " + repl + "<br />" + "<br />")

    //number added to first 2 letters 

    var num = Math.floor(Math.random() * 300) + 100

    var new_str = name[0] + name[1] + num

    document.write("Number added: " + new_str + "<br />" + "<br />")




    // all methods together in one string

    var repl = name.replace(/a|e|i|o|u|y|A|E|I|O|U|Y/gi,"*")

        for (var i = repl.length-1; i >= 2; i--)
            {
                    document.write(repl[i])
            }

    var num = Math.floor(Math.random() * 300) + 100

    var new_str = num + repl[1] + repl[0]

    document.write(new_str)
}

new_name(); 
