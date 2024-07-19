let arr = [10, 10, 20, 20, 10, 30];

let obj = {};

for (let i = 0; i < arr.length; i++) {

  if (obj[arr[i]] == undefined) {

    obj[arr[i]] = 1;

  } else {

    obj[arr[i]]++;
  }
}

for (let key in obj) {

  if (obj[key] !== 1) {

    console.log(key);
  }
}