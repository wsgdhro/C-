param(
    [string]$BuildDir = "build",
    [switch]$Clean
)

if ($Clean -and (Test-Path $BuildDir)) {
    Write-Host "清理构建目录..." -ForegroundColor Yellow
    Remove-Item -Recurse -Force $BuildDir
}

if (-not (Test-Path $BuildDir)) {
    New-Item -ItemType Directory -Path $BuildDir | Out-Null
}

Push-Location $BuildDir
try {
    Write-Host "配置 CMake..." -ForegroundColor Green
    cmake ..

    Write-Host "`n构建项目..." -ForegroundColor Green
    cmake --build . --config Release

    Write-Host "`n构建完成！" -ForegroundColor Green
}
finally {
    Pop-Location
}
