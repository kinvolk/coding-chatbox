let _filename = "mylog.log";
let _indent = 0;
let _logstack = [];

function _dolog(str) {
    try {
        let home = GLib.getenv('HOME');
        let logfilepath = GLib.build_filenamev([home, _filename]);
        let logfile = Gio.File.new_for_path(logfilepath);
        let stream = logfile.append_to(Gio.FileCreateFlags.NONE, null);

        stream.write_all(str + "\n", null);
        stream.close(null);
    } catch (e) {
        log('Failed to do the file-based log: ' + e.toString());
        log(str);
    }
}

function _indented(i, str) {
    let space = Array(i + 1).join('  ');
    _dolog(space + str)
}

function file(filename) {
    _filename = filename;
}

function start(str) {
    _indented(logstack.length, str + ' start');
    logstack.push(str);
}

function more(str) {
    _indented(logstack.length, str);
}

function done() {
    let str = logstack.pop();
    if (str === undefined) {
        _dolog('YOU FAIL AT LOGGING');
    } else {
        _indented(logstack.length, str + ' done');
    }
}
