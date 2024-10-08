" Enable syntax highlighting.
syntax on

" Enable file type detection. Vim will attempt to automatically detect the file type.
filetype on

" Enable plugins and load the plugin corresponding to the detected file type.
filetype plugin on

" Load an indentation file corresponding to the detected file type.
filetype indent on

" Add numbering to the left side of each line.
set number

" Ignore uppercase letters during search.
set ignorecase

" Override the ignorecase option if searching for uppercase letters.
" This allows you to specifically search for uppercase.
set smartcase

" Show the mode you are in.
set showmode

" Show matching words during a search.
set showmatch

" Use highlighting during a search.
set hlsearch

" //Start of Wildmenu function. You will see a list of files that match what you're searching for. You can also enable autocomplete in Vim.  //

" Enable the autocomplete menu when pressing TAB.
set wildmenu  

" Make wildmenu behave similarly to Bash autocomplete.
set wildmode=list:longest

" There are certain files we never want to edit with Vim.
" Wildmenu will ignore files with these extensions.
set wildignore=*.docx,*.jpg,*.png,*.gif,*.pdf,*.pyc,*.exe,*.flv,*.img,*.xlsx

" //end of Wildmenu function.

" Auto indentation. //disabled for testing
"set ai


" --------------------------------------
" Enable automatic closing for parentheses
" Set automatic expansion of parentheses/brackets
inoremap ( ()<esc>:call BC_AddChar(")")<cr>i
inoremap { {}<esc>:call BC_AddChar("}")<cr>i
inoremap [ []<esc>:call BC_AddChar("]")<cr>i
" inoremap " ""<esc>:call BC_AddChar(""")<cr>i
"
" Map CTRL+j to jump outside of parentheses, brackets, etc.
inoremap <C-j> <esc>:call search(BC_GetChar(), "W")<cr>a
" Function for the above
function! BC_AddChar(schar)
   if exists("b:robstack")
       let b:robstack = b:robstack . a:schar
   else
       let b:robstack = a:schar
   endif
endfunction
function! BC_GetChar()
   let l:char = b:robstack[strlen(b:robstack)-1]
   let b:robstack = strpart(b:robstack, 0, strlen(b:robstack)-1)
   return l:char
endfunction
" END automatic parentheses closing. --------------------------

" Jump out of parentheses, brackets, and braces, move the cursor
" in insert mode
imap <c-l> <esc><right>a
imap <c-h> <esc><left>a
