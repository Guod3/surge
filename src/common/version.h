#ifndef __version__
#define __version__

namespace Surge {
   struct Build {
      static const char* MajorVersionStr;
      static const int   MajorVersionInt;

      static const char* SubVersionStr;
      static const int   SubVersionInt;

      static const char* ReleaseNumberStr;
      static const char* ReleaseStr;

      static const char* BuildNumberStr;

      static const char* FullVersionStr;
      static const char* BuildHost;

      static const char* BuildLocation; // Local or Pipeline
   };
}

#define SURGE_VST2_IDENTIFIER 'cjs3'

#define stringProductName "Surge"
#define stringWebsite "https://surge-synthesizer.github.io/"
#define stringFileDescription "Surge Synth Team Surge"
#define stringCompanyName "Surge Synth Team\0"
#define stringLegalCopyright "© 2017-2020 Surge Synth Team"
#define stringLegalTrademarks "VST is a trademark of Steinberg Media Technologies GmbH"

#endif //__version__
