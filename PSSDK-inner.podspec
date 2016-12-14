Pod::Spec.new do |s|
  s.name             = "PSSDK-inner"
  s.summary          = "An Objective-C library for Elliptic Curve Digital Signing Algorithm (ECDSA) and for Elliptic Curve Diffie-Hellman (ECDH)."
  s.version          = "1.0"
  s.homepage         = "https://github.com/yehongZhou/PSSDK-inner"
  s.license          = 'MIT'
  s.author           = { "Ankit Thakur" => "ankitthakur85@icloud.com" }
  s.source           = { :git => "https://github.com/yehongZhou/PSSDK-inner.git",:tag => #{s.version}}
  s.social_media_url = 'https://twitter.com/ankitthakur'

  s.platform     = :ios, "7.0"

  s.requires_arc = true
  s.ios.source_files = 'PSSDK/*.{h,m}'

  s.ios.frameworks = 'UIKit', 'Foundation'
  # s.osx.frameworks = 'Cocoa', 'Foundation'

  # s.dependency 'Whisper', '~> 1.0'
end