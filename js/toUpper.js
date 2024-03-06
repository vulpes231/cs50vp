function capitalizeWord() {
  const word = prompt("Enter a word: ");
  let capitalized;
  let remain = "";

  if (word !== undefined) {
    capitalized = word[0].toUpperCase();

    remain = capitalized;

    for (let i = 1; i < word.length; i++) {
      remain += [word[i]];
    }

    console.log(remain);
  } else {
    console.log("No word entered!");
  }
}

// capitalizeWord("mumam");
// capitalizeWord("jack daniels");
capitalizeWord();
