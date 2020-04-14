
/**
 * 
 * @param {*} arr
 * NOTE: The below program assumes to take positive array elements. 
 * If negetive element found at any index, program console's output "Negetive number cannot be accepted" and break out from loop. 
 */
function sortByRepeatedDigitsSum(arr) {
    let pairArr = [];
    for (let i = 0; i < arr.length; i++) {
        let num = arr[i];
        let sum = 0, rem = 0;
        if (num < 0) {
            console.error("Negetive number cannot be accepted");
            break;
        } else {
            if (num >= 10) {
                while (num / 10 !== 0) {
                    if (num < 10) {
                        break;
                    }
                    sum = 0;
                    while (num !== 0) {
                        rem = num % 10;
                        sum += rem;
                        num = parseInt(Math.abs(num / 10));
                    }
                    num = sum;
                }
                pairArr.push({
                    key: sum,
                    Value: arr[i]
                });
            } else {
                pairArr.push({
                    key: num,
                    Value: arr[i]
                });
            }
        }
    }
    pairArr.sort(function (a, b) {
        return b.key - a.key;
    })
    for (let i = 0; i < pairArr.length; i++) {
        arr[i] = pairArr[i].Value;
    }
    pairArr = [];
    return (arr);
}

console.log(sortByRepeatedDigitsSum([23, 1234, 6, 11, 125])); // modify array elements for testing various test cases.
