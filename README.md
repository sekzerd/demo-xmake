# demo_xmake

### how to use

init repo

```
xmake
```

build && run

```
# Windows(powershell or cmd)
xmake build;xmake run

# Linux(bash or zsh)
xmake build && xmake run
```

## install xmake

Linux

```
curl -fsSL https://xmake.io/shget.text | bash
```

windows

```
Invoke-Expression (Invoke-Webrequest 'https://xmake.io/psget.text' -UseBasicParsing).Content
```

MacOS

```
ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
brew install xmake
```

## start on `vscode`

configure `.vscode/c_cpp_properties.json`

update `includePath`

```
"includePath": [
    "${workspaceFolder}/**",
    "D:/VisualStudio/VC/Tools/MSVC/14.43.34808/include/**",
    "C:/Users/Administrator/AppData/Local/.xmake/packages/**"
],
```
