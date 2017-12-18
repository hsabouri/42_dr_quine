const fs = require('fs');
let i = 5;
(function f() {
    while (i > 0 && i--) {
        let ext = i;
        fs.open('Sully_' + ext + '.js', 'w', (err, fd) => {
            if (!err) {
                fs.write(fd, "const fs = require('fs');\nlet i = " + ext + ";\n(" + f + ")()\n", () => {})
            }
        })
    }
})()
