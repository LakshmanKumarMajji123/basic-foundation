/**basic salary, allowances, deductions
 * calculate gross, net, bonus  (bonus is 3 months of net)
 * 
 * gross --> basic + allowances
 * net ----> basic - deductions
 * 
 * bonus = net * 3
 */

let basic_salary, allowances, deductions, net_salary, gross_salary, bonus;

basic_salary = 50000;
allowances = 10000;
deductions = 7500;

gross_salary = basic_salary + allowances; //60000
net_salary = gross_salary - deductions; //52500

bonus = 3 * net_salary;


console.log(`Gross-salary is......${gross_salary}`);
console.log(`Net-salary is......${net_salary}`);
console.log(`Bonus is......${bonus}`); //1575000


