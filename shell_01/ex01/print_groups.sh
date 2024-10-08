id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'

//note: you can't use "groups" instead of "id -Gn"
