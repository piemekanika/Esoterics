function alphabetPosition(text) {
    return Array.prototype.map.call(text.toLowerCase(), a => (a.match(/[a-z]/i)) ? a.charCodeAt() - 'a'.charCodeAt() + 1 : undefined).filter(char => char != undefined).join(' ');
}
