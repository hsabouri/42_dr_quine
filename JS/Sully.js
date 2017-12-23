const fs = require('fs');
const { exec } = require('child_process');
let i = 5;
(function f() {
    if (i == 0) {
        return 0
    }
    fs.access('Sully_' + i + '.js', err => {
        if (!err) {
            i--
        }
        fs.writeFile("Sully_" + i + ".js", "const fs = require('fs');\nconst { exec } = require('child_process');\nlet i = " + i + ";\n(" + f + ")()", (err) => {
            if (!err && i) {
                exec("node Sully_" + i + ".js", (err, stdout, stderr) => {
                })
            }
        })
    })
})()
