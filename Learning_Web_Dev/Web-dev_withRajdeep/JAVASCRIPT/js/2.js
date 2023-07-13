document.write("this is for testing <br> ");

var ayush = "this is ayush <br>";

document.write(ayush);
document.write(ayush);
document.write(ayush);
document.write(ayush);
document.write(ayush);

var test = 11;

if ( test == 10 ){
    document.write("This value of test is 10 ");
}
else{
    document.write(" This value is other than 10 <br> ");
}

var number = 5+5*5;

console.log(number);

var x = 5;

people = ++x;

console.log(people);

// Assignment operator 

var y = 7;
// y = y+10;

y += 10;
console.log(y);     

var ayush = 10;

ayush += 100;
console.log(ayush);


// string operator 


var myfname = "ayush";
var mylname = "aryan";

console.log(myfname);
console.log(mylname);

console.log(myfname+ " " +mylname); 

var mynum = "15 " + 5;
console.log(mynum);       


// Comparasion operator 

/*
   == eqaul to
   === eqaul value to 
   != not equal to
   !== not equal value and not equal type
   > greater than 
   < less than 

*/
console.log(10 == 10 );

// type check

console.log(11 === " 11 ");

// While loops 

var mynumber = 1;

while(mynumber <= 10 ){
    document.write(mynumber+ " Hello World <br>");
    mynumber ++;
}

// For loop 

for (var number = 35; number <= 40; number++ ){
  
  
    document.write (number + " Hello world <br> ");
}