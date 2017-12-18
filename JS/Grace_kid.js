const fs = require('fs');
/*
	Comment
*/
(function f() {
    fs.open('Grace_kid.js', 'w', (err, fd) => {
        if (!err) {
            fs.write(fd, "const fs = require('fs');\n/*\n\tComment\n*/\n(" + f + ")()\n", () => {})
        }
    })
})()
