const tuker = (a, b) => {
  (c = a), (a = b), (b = c);
  return `Sekarang nilai A adalah ${a} dan nilai B adalah ${b}`;
};

console.log(tuker(1, 9));
