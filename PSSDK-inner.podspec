Pod::Spec.new do |s|
  s.name             = "PSSDK-inner"
  s.version          = "1.1.1"
  s.summary          = "The open source fonts for Artsy apps + UIFont categories."
  s.homepage         = "https://github.com/yehongZhou/PSSDK-inner"
  s.license          = 'Code is MIT, then custom font licenses.'
  s.author           = { "Orta" => "orta.therox@gmail.com" }
  s.source           = { :git => "https://github.com/artsy/Artsy-OSSUIFonts.git", :tag => s.version }
  s.social_media_url = 'https://twitter.com/artsy'

  s.platform     = :ios, '7.0'
  s.requires_arc = true

  s.source_files = 'PSSDK/*.{h,m}'
  #s.resources = 'Pod/Assets/*'

  #s.frameworks = 'UIKit', 'CoreText'
  #s.module_name = 'Artsy_UIFonts'
end
