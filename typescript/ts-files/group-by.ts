
const nums = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
const grouped = Object.groupBy(nums, n => n % 2 ? 'odd' : 'even');
const groupedDict = Map.groupBy(nums, n => n % 2 ? 'odd' : 'even');

console.log(grouped); // {odd: [1, 3, 5, 7, 9], even: [2, 4, 6, 8, 10]}
console.log()
console.log(groupedDict); // {'odd' => [1, 3, 5, 7, 9], 'even' => [2, 4, 6, 8, 10]}
