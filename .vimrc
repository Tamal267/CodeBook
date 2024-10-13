"install xclip, vim-gtk3 
set nocp ai bs=2 hls ic is lbr ls=2 mouse=a nu ru sc scs smd so=3 sw=4 ts=4
filetype plugin indent on
syn on
map gA m'ggVG"+y''

inoremap {<CR> {<CR>}<Esc>ko
inoremap [<CR> [<CR>]<Esc>ko
inoremap (<CR> (<CR>)<Esc>ko
autocmd FileType cpp map <F9> :w<CR> :!clear; g++ % -DONPC -o %:r && ./%:r<CR>
nnoremap = gg=G