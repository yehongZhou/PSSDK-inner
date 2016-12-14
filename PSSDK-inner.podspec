Pod::Spec.new do |s|
  s.name         = "PSSDK-inner"
  s.version      = "0.0.1"
  s.summary      = "A short description of PSSDK-inner."
  s.description  = "PSSDK on iOS"

  s.homepage     = "http://EXAMPLE/PSSDK-inner"
  
  s.license      = "MIT"

  s.author             = { "nbt" => "zhouyehong@newborn-town.com" }
  

  s.platform     = :ios, "7.0"

  s.source       = { :git => "https://github.com/yehongZhou/PSSDK-inner.git", :tag => "#{s.version}" }


  s.source_files  = "PSSDK/*.{h,m}"

  s.vendored_libraries  = 'PSSDK/libPingStart-iOS.a'

  # s.public_header_files = "Classes/**/*.h"


 
  s.libraries = "z"


  s.requires_arc = true

  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }

end
