param(
    [string]$BuildDir = "build"
)

# 先构建
& "$PSScriptRoot\build.ps1" -BuildDir $BuildDir

if ($LASTEXITCODE -ne 0) {
    Write-Host "构建失败，停止运行。" -ForegroundColor Red
    exit $LASTEXITCODE
}

# 运行主程序
$exe = Join-Path $BuildDir "bin\clearn.exe"
if (Test-Path $exe) {
    Write-Host "`n运行主程序..." -ForegroundColor Cyan
    & $exe
}
else {
    Write-Host "未找到可执行文件: $exe" -ForegroundColor Red
}
