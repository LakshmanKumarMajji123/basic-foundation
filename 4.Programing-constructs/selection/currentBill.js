/**
 * previous_month_bill
 * present_month_bill
 * 
 * cal-- bill_ammount based upon
 * > 500 ----4.80
 * < 500 ---3.50
 */

let previous_month_reading, present_month_reading, bill_ammount, units_consumed;

const rate = 4.80;
const rate2 = 3.50;

previous_month_reading = 750;
present_month_reading = 490;

units_consumed = previous_month_reading;
units_consumed = present_month_reading;

if (units_consumed >= 500) {
  //rate

  bill_ammount = units_consumed * rate;


  console.log(`previous bill ammount is....${bill_ammount}`);


} else if (units_consumed < 500) {
  //rate2

  bill_ammount = units_consumed * rate2;

  console.log(`present bill ammount is....${bill_ammount}`);


}

