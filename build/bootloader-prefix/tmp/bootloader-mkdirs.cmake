# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Softstore/Espressif/frameworks/esp-idf-v5.1.2/components/bootloader/subproject"
  "D:/A1/spi_lcd_touch/build/bootloader"
  "D:/A1/spi_lcd_touch/build/bootloader-prefix"
  "D:/A1/spi_lcd_touch/build/bootloader-prefix/tmp"
  "D:/A1/spi_lcd_touch/build/bootloader-prefix/src/bootloader-stamp"
  "D:/A1/spi_lcd_touch/build/bootloader-prefix/src"
  "D:/A1/spi_lcd_touch/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/A1/spi_lcd_touch/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "D:/A1/spi_lcd_touch/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
