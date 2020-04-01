// Q. Given an array of numbers. Divide array elements with the smallest element in an array. 
// Display the array elements in descending order of their reminders. If 2 or more numbers has same reminder, then display in descending order of that numbers.

// Example:
//                (3, 5, 10)
//                3 -> (3 % 3) = 0,      5-> (5 % 3) = 2,           10-> (10 % 3)= 1
//                Your Function should return (5, 10, 3)

// Input: (12, 3, 10, 20, 25)
// Output: ( 20, 25, 10, 12, 3)

/**
 * Sample Test cases
 *
 *      input array                 sorted array
 * [16, 101, 280, 15, 25]   =>  [101, 280, 25, 16, 15]
 * [3, 5, 10]               =>  [5, 10, 3]
 * [12, 3, 10, 20, 25]      =>  [20, 25, 10, 12, 3]
 * [20, 25, -10, 12, 3]     =>  negetive numbers cannot be accepted ; []
 */

console.log(sortByRemainder([16, 101, 280, 15, 25])); //modify array elements for testing various test cases.


function sortByRemainder(arr) {
    let min = Math.min(...arr); // find min element from an array
    let pairedArr = [];
    let distinctRemainderArr = [];
    let sortedArr = [];

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] < 0) {
            console.log('negetive numbers cannot be accepted');
            return ([]);
        }
        pairedArr.push({
            key: (arr[i] % min),
            value: arr[i]
        });
        distinctRemainderArr.push((arr[i] % min));
    }
    pairedArr.sort(function (a, b) {
        return (b.key - a.key);
    });
    distinctRemainderArr.sort(function (a, b) {
        return (b - a);
    });
    distinctRemainderArr = [...new Set(distinctRemainderArr)]; // returns distinct reminders
    let hashedArr = createHashMap(pairedArr, distinctRemainderArr); //creates hash map for a given input
    for (let i = 0; i < hashedArr.length; i++) {
        for (let j = 0; j < hashedArr[i].value.length; j++) {
            sortedArr.push(hashedArr[i].value[j]);
        }
    }
    /**
     * explicitly free array elements
     */
    pairedArr = [];
    distinctRemainderArr = [];
    hashedArr = [];
    return (sortedArr); // returns sorted array from hash map
}

function createHashMap(pairArray, distinctRemainderArr) {
    let hArr = [];
    for (let i = 0; i < distinctRemainderArr.length; i++) {
        let valArr = [];
        let key = distinctRemainderArr[i];
        for (let j = 0; j < pairArray.length; j++) {
            if (distinctRemainderArr[i] == pairArray[j].key) {
                valArr.push(pairArray[j].value);
            }
        }
        let hash = { key: key, value: valArr };
        hArr.push(hash);
    }
    let hashMap = getSortedArrayOfObjects(hArr);
    /**
    * explicitly free array elements
    */
    pairArray = [];
    distinctRemainderArr = [];
    return (hashMap);
}
function getSortedArrayOfObjects(hashedArr) {
    for (let i = 0; i < hashedArr.length; i++) {
        hashedArr[i].value.sort(function (a, b) {
            return (b - a);
        });
    }
    return (hashedArr);
}
