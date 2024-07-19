function chinnu(a, b){

  let res;
  let sum = 0;

  for(var i = 0; i< a; i++){
    res = i*b;

    if(res % 2 === 0){

      sum += res;
    }
  }
  return sum;
}

let output = chinnu(5, 3);
console.log(output);