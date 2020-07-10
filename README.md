# rimek
A converter from (almost) code page 437 to unicode and back.
(https://en.wikipedia.org/wiki/Code_page_437)

Technically, it converts bytes to unicode characters matching a character set the same as code page 437, except the characters for byte 0 and byte 255 are replaced with distinct printable characters, so that every character appears differently.

This is the character set used:

    ₒ☺☻♥♦♣♠•◘○◙♂♀♪♫☼►◄↕‼¶§▬↨↑↓→←∟↔▲▼
     !"#$%&'()*+,-./0123456789:;<=>?
    @ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_
    `abcdefghijklmnopqrstuvwxyz{|}~⌂
    ÇüéâäàåçêëèïîìÄÅÉæÆôöòûùÿÖÜ¢£¥₧ƒ
    áíóúñÑªº¿⌐¬½¼¡«»░▒▓│┤╡╢╖╕╣║╗╝╜╛┐
    └┴┬├─┼╞╟╚╔╩╦╠═╬╧╨╤╥╙╘╒╓╫╪┘┌█▄▌▐▀
    αßΓπΣσµτΦΘΩδ∞φε∩≡±≥≤⌠⌡÷≈°∙·√ⁿ²■ȳ

The output is encoded in UTF-8.

I use this character-set to inspect binary files.
It's similar to viewing files in MS-DOS Edit in binary mode.

It can also convert text composed of these unicode characters back into byte data.
