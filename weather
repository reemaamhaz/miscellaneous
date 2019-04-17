//single user input weather

var date1 = prompt("What is the day of the week?");
var high_temp1 = prompt("What is the high temperature today?");
var low_temp1 = prompt("What is the low temperature today?");
var sun_rise1 = prompt("What time does the sun rise today? (In military time ex. 6.30)");
var sun_set1 = prompt("What time does the sun set today? (In military time ex. 12.30)");
var clouds1 = prompt("Is it cloudy today?");
var sun1 = prompt("Is it sunny today?");
var rain1 = prompt("What is the percent chance it rains today?");
var snow1 = prompt("What is the percent chance it snows today?");
var humidity1 = prompt("What is the percentage of humidity today?");
var wind1 = prompt("How fast are winds blowing today?"); 

document.write("PERSONAL FORECAST" + "<br />" + "<br />")

function weatherObj ()
{
        this.date = date1;
        this.high_temp = high_temp1;
        this.low_temp = low_temp1;
        this.sun_rise = sun_rise1;
        this.sun_set = sun_set1;
        this.clouds = clouds1;
        this.sun = sun1;
        this.rain = rain1;
        this.snow = snow1;
        this.humidity = humidity1;
        this.wind = wind1;
}

var user = new weatherObj();

for (var index in user)
            {
                        if (index == "humidity" || index == "rain" || index == "snow")
                        {
                                document.write(index + ": " + user[index] + "%" + "<br />");
                        }
                        else if (index == "wind")
                        {
                                document.write(index + ": " + user[index] + " MPH" + "<br />");
                        }
                        else if (index == "high_temp" || index == "low_temp")
                        {
                                document.write(index + ": " + user[index] + "°" + "<br />");  }
                        else
                        {
                                document.write(index + ": " + user[index] + "<br />");
                        }              
            } 
    
                    user.sun_light = function()
                        {
                            return (sun_set1 - sun_rise1);
                        };
       
                    document.write("Hours of Sunlight: " + user.sun_light() + "<br />" + "<br />");    
                  

// weekly forecast

document.write("WEEKLY FORECAST" + "<br />" + "<br />")

function weeklyWeatherObj (date, high_temp, low_temp, sun_rise, sun_set, clouds, sun, rain, snow, humidity, wind)
{
        this.date = date;
        this.high_temp = high_temp;
        this.low_temp = low_temp;
        this.sun_rise = sun_rise;
        this.sun_set = sun_set;
        this.clouds = clouds;
        this.sun = sun;
        this.rain = rain;
        this.snow = snow;
        this.humidity = humidity;
        this.wind = wind;


        weekForecast.push(this);
      
}

var weekForecast = [];
var m = new weeklyWeatherObj ("Monday","80","40","5.42","18","No","Yes","20","0","20","15");
var t = new weeklyWeatherObj ("Tuesday","90","60","5.43","18.4","No","Yes","0","0","5","5");
var w = new weeklyWeatherObj ("Wednesday","85","45","5.44","18.2","No","Yes","0","0","20","10");
var th = new weeklyWeatherObj ("Thursday","87","43","5.45","18","No","Yes","0","0","20","1");
var f = new weeklyWeatherObj ("Friday","88","47","5.47","18.6","No","Yes","5","0","10","0");
var sat = new weeklyWeatherObj ("Saturday","91","64","5.48","18.3","No","Yes","0","0","0","0");
var sund = new weeklyWeatherObj ("Sunday","85","41","5.49","18.1","No","Yes","10","0","0","2");

 

weekForecast.forEach(function(day)
{
    
        for (var i in day)
                    {
                        if (i == "humidity" || i == "rain" || i == "snow")
                        {
                                document.write(i + ": " + day[i] + "%" + "<br />");
                        }
                        else if (i == "wind")
                        {
                                document.write(i + ": " + day[i] + " MPH" + "<br />");
                        }
                        else if (i == "high_temp" || i == "low_temp")
                        {
                                document.write(i + ": " + day[i] + "°" + "<br />");  }
                        else
                        {
                                document.write(i + ": " + day[i] + "<br />");
                        }              
                     } 
    
                    day.sun_light = function()
                        {
                            return (this.sun_set - this.sun_rise);
                        };
       
                    document.write("Hours of Sunlight: " + day.sun_light() + "<br />" + "<br />");    
                        
});
