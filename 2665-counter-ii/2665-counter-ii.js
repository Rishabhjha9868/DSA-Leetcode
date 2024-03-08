/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
  var total = init;
function increment(){
    total++;
    return total;
    }
    function decrement(){
        total--;
        return total;
    }
    function reset(){
        total = init;
        return total;
    }
    return{ increment,decrement,reset}
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */