let reverse = "";

for(let i = str.length-1; i>=0; i--){

  reverse+= str[i]
}

if(reverse ==str){

  console.log("It is Palindrome");

}else{

  console.log("NOt a palidnrome");
}