# gender

## Usage
1. Download the source `git clone https://github.com/JohnAlexCO/gender.git --depth=1`
2. Pick an appropriate language `#define`
3. `#include "gender.h"` after the language guard
4. Make sure to include a definition for `character_t` which includes a `gender_t *gender`
5. Compile with any C89/C99 Compiler

## Innards
See `locale/locale.h` for language headers.
See `templates/templates.h` for gender templates.
See `debug/debug.h` for debugging functions.
See `gender.c` for helper functions.

## Contributing
1. Open an Issue describing what modifications you're making to the code and why
2. Name the Pull request like `SEE: #{issue number}`. I know this is a Github-ism, but this is a Github repo, so

## License
`gender` is available to you under the permissive MIT License. 
You are allowed to make changes to `gender`, redistribute `gender`,
sell `gender`, whatever you want, as long as any copies or deriviatives
for `gender` include the MIT License notice and Modula.dev's copyright notice.
`gender` is &copy; [Modula](https://modula.dev) 2024, all rights reserved.
