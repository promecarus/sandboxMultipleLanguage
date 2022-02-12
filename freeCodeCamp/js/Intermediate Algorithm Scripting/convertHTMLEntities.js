function convertHTML(str) {
    let temp = str.split("");
    for (let i = 0; i < str.length; i++) {
        switch (temp[i]) {
            case "&":
                temp[i] = "&amp;";
                break;
            case "<":
                temp[i] = "&lt;";
                break;
            case ">":
                temp[i] = "&gt;";
                break;
            case '"':
                temp[i] = "&quot;";
                break;
            case "'":
                temp[i] = "&apos;";
                break;
        }
    }

    console.log(temp.join(""));
    return temp.join("");
}

convertHTML("Dolce & Gabbana");
