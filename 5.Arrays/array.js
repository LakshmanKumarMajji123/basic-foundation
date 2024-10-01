/** four properties
 * 1. access the elements in the array
 * 2. properties
 * 3. methods  (push & pop)
 */
/**for-of access the values 
 * for-in access the index/keys
 * or normal for-loop
 */

/**single dimension array */
// let student = [1, 2, 3, 4, 5, 6, 7, 8];


// for (let sem of student) {

//   console.log(sem);
// }


/**2D array */
let matrix = [
  [1, 2, 3],
  [4, 5, 6],
  [7, 8, 9]

];

for (let rows = 0; rows < 3; rows++) {

  let space = '';
  for (let columns = 0; columns < 3; columns++) {


    space = space + matrix[rows][columns] + " ";

  }
  console.log(space);
}



/**3d array */

let students = new Array(2); //taking 2 students like 2 x(3x3)arry array of array of array

for (let student = 0; student < 2; student++) {

  students[student] = new Array(3); //1st layer holds 3 rows

  for (let sem = 0; sem < 3; sem++) { //rows

    students[student][sem] = new Array(3);
    //each row in a layer (matrix3D[i][j]), create an array to hold the 3 columns

    for (let sub = 0; sub < 3; sub++) { //columns

      students[student][sem][sub] = 0;

    }
  }
}

//Add the values
for (let student = 0; student < 2; student++) {

  for (let sem = 0; sem < 3; sem++) {

    for (let sub = 0; sub < 3; sub++) {


      students[student][sem][sub] = student + sem + sub; //Add the values

      //printf("%d", students[student][sem][sub]);
    }
  }
}


for (let student = 0; student < 2; student++) {

  console.log(`${student}`);

  for (let sem = 0; sem < 3; sem++) {

    let space = '';

    for (let sub = 0; sub < 3; sub++) {

      space += students[student][sem][sub] + ' ';

    }

    console.log(space);
  }
}






