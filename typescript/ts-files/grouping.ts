
const a = [1, 2, 3, 4, 5, 6];
// const m = Map.groupBy(a, n => n % 2 == 0); // doesn't work in nodets

const countDictionary = a.reduce((acc, value) => {
  acc[value] = (acc[value] || 0) + 1;
  return acc;
}, {} as any);

console.log(countDictionary);
