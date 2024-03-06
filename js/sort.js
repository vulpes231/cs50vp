function sortArray(array) {
  let swapped;
  do {
    swapped = false;
    for (let i = 0; i < array.length - 1; i++) {
      if (array[i] > array[i + 1]) {
        let temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = true;
      }
    }
  } while (swapped);

  console.log(array);
}

const numb = [13, 1, 4, 9, 72];
const numbers = [13, 1, 4, 9, 72, 32, 17, 10, 8, 50, 23, 91, 2, 0];

sortArray(numbers);
sortArray(numb);
