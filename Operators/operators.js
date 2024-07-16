


//go to showroom and get the bike it is GT360

let bike = "GT360";

if ((bike == 'R15') || (bike == 'himalayan') || (bike == 'ninja') || (bike == 'GT360')) {

  console.log(`your bike is....${bike}`);
}

//if student passed his/her graduation and having solid skills to get a job

let student = 'passe';
let skills = 'fullstack devlopment';

if ((student === 'passed') && (skills === 'fullstack devlopment')) {

  console.log("you are 'Eligible' for a job");
} else {
  console.log("you are 'not eligible' for a job");
}

//lakshman go to market and get the "fish" if fish are available or "chicken" or "prawans"

let lakshman = 'market';
const market = 'chicken';

if (lakshman == 'market') {

  switch (market) {

    case ('fish'): console.log(`${market} is available in the market`); break;
    case ('chicken'): console.log(`${market} is available in the market`); break;
    case ('prawns'): console.log(`${market} is available in the market`); break;
    default: console.log(`You Entered item  '${market}' is Available in the market`); break;
    
  }

} else {

  console.log("Hey please go to market!");
}

