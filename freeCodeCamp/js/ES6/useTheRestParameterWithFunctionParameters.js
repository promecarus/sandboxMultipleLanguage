// before
// const sum = (x, y, z) => {
//     const args = [x, y, z];
//     return args.reduce((a, b) => a + b, 0);
// };

// after
const sum = (...args) => {
    return args.reduce((a, b) => a + b, 0);
};
