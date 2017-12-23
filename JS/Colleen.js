/*
	Comment
*/
let fun = (f) => {
    console.log("/*\n\tComment\n*/\nlet fun = " + fun + "\n(" + f + ")()")
}
(function f() {
    /*
        Comment
    */
    fun(f);
})()
