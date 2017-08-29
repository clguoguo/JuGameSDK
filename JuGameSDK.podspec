#
#  Be sure to run `pod spec lint JuGameSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|


  s.name         = "JuGameSDK"
  s.version      = "1.0.0"
  s.summary      = "JuGameSDK-ShunWan.create by JuGame8868"

  s.homepage     = "https://github.com/clguoguo/JuGameSDK"

  s.license      = { :type => "MIT" }

  s.author       = { "Magician" => "280383779@qq.com" }


  s.platform     = :ios, "8.0"

  s.source       = { :git => "https://github.com/clguoguo/JuGameSDK.git", :tag => "#{s.version}" }
  s.resource = 'JuGameSDK/JuGameSDK.bundle'
  s.vendored_frameworks = 'JuGameSDK/JuGameSDK.framework'

  s.frameworks = "StoreKit"

  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"
  # s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }

  s.dependency 'AFNetworking'
end
