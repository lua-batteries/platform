package = "platform"
version = "dev-1"
source = {
   url = "git://github.com/lua-batteries/platform"
}
description = {
   homepage = "https://github.com/lua-batteries/platform",
   license = "MIT"
}
build = {
   type = "builtin",
   modules = {
      platform = {
         sources = "src/platform.c"
      }
   }
}
