param(
    [string]$BuildDir = "build"
)

# 构建并运行测试
& "$PSScriptRoot\build.ps1" -BuildDir $BuildDir

if ($LASTEXITCODE -ne 0) {
    Write-Host "构建失败。" -ForegroundColor Red
    exit $LASTEXITCODE
}

$testExe = Join-Path $BuildDir "bin\test_fruit.exe"
if (Test-Path $testExe) {
    Write-Host "`n运行测试..." -ForegroundColor Cyan
    & $testExe
}
else {
    Write-Host "未找到测试可执行文件: $testExe" -ForegroundColor Red
}

# 也可以用 CTest
Push-Location $BuildDir
try {
    Write-Host "`n运行 CTest..." -ForegroundColor Cyan
    ctest --output-on-failure
}
finally {
    Pop-Location
}
