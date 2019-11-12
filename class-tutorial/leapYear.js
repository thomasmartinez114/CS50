// Bool is leap year (int)

// The year can be evenly divided by 4;
// If the year can be evenly divided by 100, it is NOT a leap year, unless;
// The year is also evenly divisible by 400. Then it is a leap year.

// take int number divide it by 4, 100, 400 to see if leap year
// if 1996 / 4 & 400 it's leap year

function leapYear(year) {
  if (year % 4 === 0) {
    console.log(`${year} is Leap Year!`);
  }
}

leapYear(1996);
leapYear(2001);
