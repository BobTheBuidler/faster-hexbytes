#### [faster_hexbytes.main](https://github.com/BobTheBuidler/faster-hexbytes/blob/project-urls/faster_hexbytes/main.py) - [view benchmarks](https://github.com/BobTheBuidler/faster-hexbytes/blob/project-urls/benchmarks/test_main_benchmarks.py)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `hexbytes_getitem_index[-1-0-9]` | 2.566749458196585e-05 | 2.4470500856167492e-05 | 4.66% | 4.89% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-4-byte pattern]` | 2.584648311907309e-05 | 2.4731572718584167e-05 | 4.31% | 4.51% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-all byte values]` | 2.5659418421505475e-05 | 2.4771012777212387e-05 | 3.46% | 3.59% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0x00/0xff]` | 2.565505990314316e-05 | 2.4454094905976348e-05 | 4.68% | 4.91% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-alternating 0xaa/0x55]` | 2.5519257393014726e-05 | 2.5121904524531653e-05 | 1.56% | 1.58% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-ascii sentence]` | 2.5603106456129e-05 | 2.4637678717199835e-05 | 3.77% | 3.92% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00'*32]` | 2.5257595611385044e-05 | 2.4778034457789387e-05 | 1.90% | 1.94% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x00\\xff\\x00\\xff']` | 2.5623146986081186e-05 | 2.4780049241666307e-05 | 3.29% | 3.40% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*100]` | 2.5337791036145744e-05 | 2.497974428407549e-05 | 1.41% | 1.43% | 1.01x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01'*2048]` | 2.545998196470239e-05 | 2.4867939224181577e-05 | 2.33% | 2.38% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x01\\x02\\x03']` | 2.539863804260082e-05 | 2.4947593801909865e-05 | 1.78% | 1.81% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.548785159602703e-05 | 2.4620810902670026e-05 | 3.40% | 3.52% | 1.04x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x7f'*8]` | 2.5496902071571274e-05 | 2.4787023083421074e-05 | 2.78% | 2.86% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'\\x80'*8]` | 2.5701213994294304e-05 | 2.4531223770841794e-05 | 4.55% | 4.77% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xde\\xad\\xbe\\xef']` | 2.5271412459176062e-05 | 2.4699806729263085e-05 | 2.26% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'\\xff'*64]` | 2.557111808177298e-05 | 2.508976482340495e-05 | 1.88% | 1.92% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-b'a'*1024]` | 2.554321833177345e-05 | 2.480223781189013e-05 | 2.90% | 2.99% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-b'abc']` | 2.5566128433564824e-05 | 2.4986688615117986e-05 | 2.27% | 2.32% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-long alternating]` | 2.561337749121389e-05 | 2.4779491011987045e-05 | 3.26% | 3.37% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-mixed pattern]` | 2.553681646054516e-05 | 2.4958463010112798e-05 | 2.26% | 2.32% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-multiples of 0x10]` | 2.5777022197198416e-05 | 2.4626225412772254e-05 | 4.46% | 4.67% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-palindrome ascii]` | 2.560036199927745e-05 | 2.507293097211879e-05 | 2.06% | 2.10% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-palindrome numeric]` | 2.5619981396698865e-05 | 2.4795773338980217e-05 | 3.22% | 3.32% | 1.03x | ✅ |
| `hexbytes_getitem_index[-1-palindrome]` | 2.5462730270401277e-05 | 2.500374261317634e-05 | 1.80% | 1.84% | 1.02x | ✅ |
| `hexbytes_getitem_index[-1-repeated 0-9]` | 2.586722217503861e-05 | 2.464381573471112e-05 | 4.73% | 4.96% | 1.05x | ✅ |
| `hexbytes_getitem_index[-1-two patterns]` | 2.5613643666157988e-05 | 2.4581471154530603e-05 | 4.03% | 4.20% | 1.04x | ✅ |
| `hexbytes_getitem_index[0-0-9]` | 2.4298485061144632e-05 | 2.3980817276945437e-05 | 1.31% | 1.32% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-4-byte pattern]` | 2.4531083243295797e-05 | 2.4132139772983737e-05 | 1.63% | 1.65% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-all byte values]` | 2.4441721230834047e-05 | 2.39033035741942e-05 | 2.20% | 2.25% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-alternating 0x00/0xff]` | 2.434342089176814e-05 | 2.402586942949309e-05 | 1.30% | 1.32% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-alternating 0xaa/0x55]` | 2.4369601869037275e-05 | 2.392772377176527e-05 | 1.81% | 1.85% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-ascii sentence]` | 2.4632709782479015e-05 | 2.388387265139433e-05 | 3.04% | 3.14% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00'*32]` | 2.4200176486000742e-05 | 2.3861332543764455e-05 | 1.40% | 1.42% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-b'\\x00\\xff\\x00\\xff']` | 2.4396021469781707e-05 | 2.4014749059759177e-05 | 1.56% | 1.59% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*100]` | 2.442593301854802e-05 | 2.384123643072998e-05 | 2.39% | 2.45% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01'*2048]` | 2.4574912034363514e-05 | 2.3897434293064003e-05 | 2.76% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\x01\\x02\\x03']` | 2.425918579540085e-05 | 2.388000796682271e-05 | 1.56% | 1.59% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4153079897278525e-05 | 2.3780647129503998e-05 | 1.54% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x7f'*8]` | 2.433280600295227e-05 | 2.378948893716534e-05 | 2.23% | 2.28% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\x80'*8]` | 2.4644853010841595e-05 | 2.3851779752399943e-05 | 3.22% | 3.33% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'\\xde\\xad\\xbe\\xef']` | 2.4262305379373765e-05 | 2.3848094753866712e-05 | 1.71% | 1.74% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'\\xff'*64]` | 2.4273005585475214e-05 | 2.3873734361112254e-05 | 1.64% | 1.67% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-b'a'*1024]` | 2.465498551319655e-05 | 2.382860135055304e-05 | 3.35% | 3.47% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-b'abc']` | 2.4215013073404228e-05 | 2.375807719542862e-05 | 1.89% | 1.92% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-long alternating]` | 2.4647128359763207e-05 | 2.41458871303247e-05 | 2.03% | 2.08% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-mixed pattern]` | 2.4303463881028368e-05 | 2.3927219418587513e-05 | 1.55% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-multiples of 0x10]` | 2.434468049271903e-05 | 2.4028367359267153e-05 | 1.30% | 1.32% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-palindrome ascii]` | 2.4231416580291193e-05 | 2.3943964054330575e-05 | 1.19% | 1.20% | 1.01x | ✅ |
| `hexbytes_getitem_index[0-palindrome numeric]` | 2.4457940319579677e-05 | 2.3951130320649757e-05 | 2.07% | 2.12% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-palindrome]` | 2.4473017771004243e-05 | 2.3943023349926912e-05 | 2.17% | 2.21% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-repeated 0-9]` | 2.4514335886685266e-05 | 2.3878868764301574e-05 | 2.59% | 2.66% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single 0xff]` | 2.4493813080490984e-05 | 2.3862893083823233e-05 | 2.58% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[0-single null byte]` | 2.4518873495819466e-05 | 2.401970757341829e-05 | 2.04% | 2.08% | 1.02x | ✅ |
| `hexbytes_getitem_index[0-two patterns]` | 2.447506478477528e-05 | 2.393072559449248e-05 | 2.22% | 2.27% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-0-9]` | 2.4481498637084858e-05 | 2.381333717883591e-05 | 2.73% | 2.81% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-4-byte pattern]` | 2.438095658511778e-05 | 2.390464429365894e-05 | 1.95% | 1.99% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-all byte values]` | 2.4396248125280503e-05 | 2.4051612467470424e-05 | 1.41% | 1.43% | 1.01x | ✅ |
| `hexbytes_getitem_index[1-alternating 0x00/0xff]` | 2.452079876741362e-05 | 2.392416364505779e-05 | 2.43% | 2.49% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-alternating 0xaa/0x55]` | 2.4695618044874197e-05 | 2.3970606585873144e-05 | 2.94% | 3.02% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-ascii sentence]` | 2.4579320710880294e-05 | 2.391590027454387e-05 | 2.70% | 2.77% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00'*32]` | 2.6281863087795906e-05 | 2.3945974838776266e-05 | 8.89% | 9.75% | 1.10x | ✅ |
| `hexbytes_getitem_index[1-b'\\x00\\xff\\x00\\xff']` | 2.4472310016381916e-05 | 2.3920484033927476e-05 | 2.25% | 2.31% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*100]` | 2.4466005032893474e-05 | 2.383836631138857e-05 | 2.57% | 2.63% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01'*2048]` | 2.445735751199021e-05 | 2.3931698614157042e-05 | 2.15% | 2.20% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x01\\x02\\x03']` | 2.4364259401095014e-05 | 2.3783685779168813e-05 | 2.38% | 2.44% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4530290211986987e-05 | 2.3771026808237576e-05 | 3.10% | 3.19% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\x7f'*8]` | 2.4356815781001435e-05 | 2.3902368760929073e-05 | 1.87% | 1.90% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\x80'*8]` | 2.4464156348073876e-05 | 2.3835546748944795e-05 | 2.57% | 2.64% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'\\xde\\xad\\xbe\\xef']` | 2.434734546075037e-05 | 2.3912283660326413e-05 | 1.79% | 1.82% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'\\xff'*64]` | 2.442167973249071e-05 | 2.3913576075730317e-05 | 2.08% | 2.12% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-b'a'*1024]` | 2.4592237708907497e-05 | 2.388080146976933e-05 | 2.89% | 2.98% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-b'abc']` | 2.447263150341208e-05 | 2.3800097913115152e-05 | 2.75% | 2.83% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-long alternating]` | 2.4350566849421232e-05 | 2.3862687526836515e-05 | 2.00% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-mixed pattern]` | 2.4538704642967396e-05 | 2.3845676856796674e-05 | 2.82% | 2.91% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-multiples of 0x10]` | 2.457567825172959e-05 | 2.38773929979404e-05 | 2.84% | 2.92% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-palindrome ascii]` | 2.4530315868933193e-05 | 2.3830824856183185e-05 | 2.85% | 2.94% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-palindrome numeric]` | 2.434526797735307e-05 | 2.3884741414686444e-05 | 1.89% | 1.93% | 1.02x | ✅ |
| `hexbytes_getitem_index[1-palindrome]` | 2.4625056673617428e-05 | 2.3856703536483638e-05 | 3.12% | 3.22% | 1.03x | ✅ |
| `hexbytes_getitem_index[1-repeated 0-9]` | 2.470500061587349e-05 | 2.370747552622937e-05 | 4.04% | 4.21% | 1.04x | ✅ |
| `hexbytes_getitem_index[1-two patterns]` | 2.4653369797071636e-05 | 2.395049029495274e-05 | 2.85% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-0-9]` | 2.410864315294393e-05 | 2.4157877505404893e-05 | -0.20% | -0.20% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-4-byte pattern]` | 2.4299958600098587e-05 | 2.41956458366114e-05 | 0.43% | 0.43% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-all byte values]` | 2.4410448536180398e-05 | 2.4109626756441467e-05 | 1.23% | 1.25% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-alternating 0x00/0xff]` | 2.4364236165337218e-05 | 2.4087707228472883e-05 | 1.13% | 1.15% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-alternating 0xaa/0x55]` | 2.416415866928085e-05 | 2.3973827812395203e-05 | 0.79% | 0.79% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-ascii sentence]` | 2.4281950333274843e-05 | 2.382688844639877e-05 | 1.87% | 1.91% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00'*32]` | 2.435895180175145e-05 | 2.4083047840747558e-05 | 1.13% | 1.15% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x00\\xff\\x00\\xff']` | 2.487499399715266e-05 | 2.3905846957791063e-05 | 3.90% | 4.05% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*100]` | 2.4086074725015678e-05 | 2.3963774595735268e-05 | 0.51% | 0.51% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01'*2048]` | 2.419323950247198e-05 | 2.3979172860271265e-05 | 0.88% | 0.89% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x01\\x02\\x03']` | 2.462049444952345e-05 | 2.3914870325402386e-05 | 2.87% | 2.95% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4246156169982902e-05 | 2.3934539980467165e-05 | 1.29% | 1.30% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x7f'*8]` | 2.45030394854702e-05 | 2.4219757197529852e-05 | 1.16% | 1.17% | 1.01x | ✅ |
| `hexbytes_getitem_index[2-b'\\x80'*8]` | 2.4612228800522197e-05 | 2.4012194417508907e-05 | 2.44% | 2.50% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'\\xde\\xad\\xbe\\xef']` | 2.4476961806585938e-05 | 2.3816683126785987e-05 | 2.70% | 2.77% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-b'\\xff'*64]` | 2.4368650846023744e-05 | 2.3783631109534027e-05 | 2.40% | 2.46% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'a'*1024]` | 2.4404585607102932e-05 | 2.3992156430432017e-05 | 1.69% | 1.72% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-b'abc']` | 2.442102566067714e-05 | 2.3942660582251587e-05 | 1.96% | 2.00% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-long alternating]` | 2.4182398989629787e-05 | 2.422151536256205e-05 | -0.16% | -0.16% | 1.00x | ❌ |
| `hexbytes_getitem_index[2-mixed pattern]` | 2.473949584920097e-05 | 2.3895502636309606e-05 | 3.41% | 3.53% | 1.04x | ✅ |
| `hexbytes_getitem_index[2-multiples of 0x10]` | 2.4129454903474e-05 | 2.4310018646015873e-05 | -0.75% | -0.74% | 0.99x | ❌ |
| `hexbytes_getitem_index[2-palindrome ascii]` | 2.445153208816542e-05 | 2.4055215048586776e-05 | 1.62% | 1.65% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-palindrome numeric]` | 2.4185109570399757e-05 | 2.4086461120548544e-05 | 0.41% | 0.41% | 1.00x | ✅ |
| `hexbytes_getitem_index[2-palindrome]` | 2.4513111915348856e-05 | 2.4030896659222923e-05 | 1.97% | 2.01% | 1.02x | ✅ |
| `hexbytes_getitem_index[2-repeated 0-9]` | 2.451642117275009e-05 | 2.3904904014258434e-05 | 2.49% | 2.56% | 1.03x | ✅ |
| `hexbytes_getitem_index[2-two patterns]` | 2.4351947531035856e-05 | 2.3960514245566124e-05 | 1.61% | 1.63% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-0-9]` | 2.433092918302496e-05 | 2.404778384276576e-05 | 1.16% | 1.18% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-4-byte pattern]` | 2.4231696688094505e-05 | 2.4014517543048284e-05 | 0.90% | 0.90% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-all byte values]` | 2.4108741001606985e-05 | 2.4089139169862838e-05 | 0.08% | 0.08% | 1.00x | ✅ |
| `hexbytes_getitem_index[3-alternating 0x00/0xff]` | 2.4187900524664553e-05 | 2.4015850909559644e-05 | 0.71% | 0.72% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-alternating 0xaa/0x55]` | 2.4195351455909803e-05 | 2.3950463238863592e-05 | 1.01% | 1.02% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-ascii sentence]` | 2.4067977964776583e-05 | 2.394229029196921e-05 | 0.52% | 0.52% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00'*32]` | 2.4314789046646094e-05 | 2.389490721538457e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-b'\\x00\\xff\\x00\\xff']` | 2.3993133170105564e-05 | 2.3829570406422408e-05 | 0.68% | 0.69% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*100]` | 2.4103230188568194e-05 | 2.3967776622406578e-05 | 0.56% | 0.57% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x01'*2048]` | 2.4274139989304584e-05 | 2.3988898856433794e-05 | 1.18% | 1.19% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4183887105565457e-05 | 2.4036434136895255e-05 | 0.61% | 0.61% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x7f'*8]` | 2.4123788497774644e-05 | 2.392163026824222e-05 | 0.84% | 0.85% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\x80'*8]` | 2.411109546398299e-05 | 2.3806080380082156e-05 | 1.27% | 1.28% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\xde\\xad\\xbe\\xef']` | 2.41451950068321e-05 | 2.3891158311372612e-05 | 1.05% | 1.06% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'\\xff'*64]` | 2.420509019138634e-05 | 2.3925056110247364e-05 | 1.16% | 1.17% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-b'a'*1024]` | 2.4260702512007685e-05 | 2.398540039506455e-05 | 1.13% | 1.15% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-long alternating]` | 2.4158142643493535e-05 | 2.398552919704882e-05 | 0.71% | 0.72% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-mixed pattern]` | 2.421937219574209e-05 | 2.3844825425845754e-05 | 1.55% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-multiples of 0x10]` | 2.434596841837417e-05 | 2.402740851349062e-05 | 1.31% | 1.33% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome ascii]` | 2.4265199596284588e-05 | 2.3973791091212878e-05 | 1.20% | 1.22% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome numeric]` | 2.4192338715749088e-05 | 2.4001091073912988e-05 | 0.79% | 0.80% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-palindrome]` | 2.419513397044023e-05 | 2.3919599077007402e-05 | 1.14% | 1.15% | 1.01x | ✅ |
| `hexbytes_getitem_index[3-repeated 0-9]` | 2.435835197485946e-05 | 2.387034259209528e-05 | 2.00% | 2.04% | 1.02x | ✅ |
| `hexbytes_getitem_index[3-two patterns]` | 2.4044971093812956e-05 | 2.3861160713419915e-05 | 0.76% | 0.77% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-0-9]` | 2.419974770572772e-05 | 2.3876603384255947e-05 | 1.34% | 1.35% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-4-byte pattern]` | 2.4089055638539036e-05 | 2.4012124065459928e-05 | 0.32% | 0.32% | 1.00x | ✅ |
| `hexbytes_getitem_index[4-all byte values]` | 2.413811253333007e-05 | 2.4013603812415847e-05 | 0.52% | 0.52% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-alternating 0x00/0xff]` | 2.423373916114262e-05 | 2.3911034652234995e-05 | 1.33% | 1.35% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-alternating 0xaa/0x55]` | 2.428059613253824e-05 | 2.3872528673989732e-05 | 1.68% | 1.71% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-ascii sentence]` | 2.4105557237603198e-05 | 2.3849899375798792e-05 | 1.06% | 1.07% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x00'*32]` | 2.4219928188518033e-05 | 2.4002704883777722e-05 | 0.90% | 0.90% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*100]` | 2.429759773169616e-05 | 2.396081314421567e-05 | 1.39% | 1.41% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\x01'*2048]` | 2.4434662137811757e-05 | 2.3858908254898656e-05 | 2.36% | 2.41% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x10\\x20\\x30\\x40\\x50']` | 2.4439626237428373e-05 | 2.384147986176378e-05 | 2.45% | 2.51% | 1.03x | ✅ |
| `hexbytes_getitem_index[4-b'\\x7f'*8]` | 2.4317410522917948e-05 | 2.3873839587265417e-05 | 1.82% | 1.86% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-b'\\x80'*8]` | 2.4264565016461153e-05 | 2.3939795222629366e-05 | 1.34% | 1.36% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'\\xff'*64]` | 2.411134434797757e-05 | 2.3835009497614007e-05 | 1.15% | 1.16% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-b'a'*1024]` | 2.400238087947567e-05 | 2.3808205128706487e-05 | 0.81% | 0.82% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-long alternating]` | 2.406146755605643e-05 | 2.3847295812339278e-05 | 0.89% | 0.90% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-mixed pattern]` | 2.4081747484058206e-05 | 2.394214239588926e-05 | 0.58% | 0.58% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-multiples of 0x10]` | 2.4154655693099408e-05 | 2.3876589065661087e-05 | 1.15% | 1.16% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome ascii]` | 2.4095778494759616e-05 | 2.391966481931518e-05 | 0.73% | 0.74% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-palindrome numeric]` | 2.420273708429731e-05 | 2.382813703801384e-05 | 1.55% | 1.57% | 1.02x | ✅ |
| `hexbytes_getitem_index[4-palindrome]` | 2.422782938149156e-05 | 2.4052558164253867e-05 | 0.72% | 0.73% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-repeated 0-9]` | 2.414004829841295e-05 | 2.390651026872836e-05 | 0.97% | 0.98% | 1.01x | ✅ |
| `hexbytes_getitem_index[4-two patterns]` | 2.4087928076293474e-05 | 2.3929304990347123e-05 | 0.66% | 0.66% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-0-9]` | 2.3957979728069832e-05 | 2.4000895788259224e-05 | -0.18% | -0.18% | 1.00x | ❌ |
| `hexbytes_getitem_index[5-4-byte pattern]` | 2.420623185914189e-05 | 2.389522802223152e-05 | 1.28% | 1.30% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-all byte values]` | 2.4243539135840106e-05 | 2.4009052413715837e-05 | 0.97% | 0.98% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-alternating 0x00/0xff]` | 2.424487520363157e-05 | 2.3952891071266375e-05 | 1.20% | 1.22% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-alternating 0xaa/0x55]` | 2.422066725391919e-05 | 2.3923803340872524e-05 | 1.23% | 1.24% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-ascii sentence]` | 2.4067628581323814e-05 | 2.3878160404373514e-05 | 0.79% | 0.79% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x00'*32]` | 2.4665138608844548e-05 | 2.3962273479286656e-05 | 2.85% | 2.93% | 1.03x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*100]` | 2.433551912673549e-05 | 2.4056201941857877e-05 | 1.15% | 1.16% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x01'*2048]` | 2.4141313198184765e-05 | 2.3920982937824966e-05 | 0.91% | 0.92% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x7f'*8]` | 2.4145454877943895e-05 | 2.3945266330908606e-05 | 0.83% | 0.84% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\x80'*8]` | 2.4083494056908662e-05 | 2.3938158249900875e-05 | 0.60% | 0.61% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'\\xff'*64]` | 2.423211788156598e-05 | 2.3911633225135032e-05 | 1.32% | 1.34% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-b'a'*1024]` | 2.4154410082447078e-05 | 2.398712915192707e-05 | 0.69% | 0.70% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-long alternating]` | 2.4040029870123102e-05 | 2.401751198413704e-05 | 0.09% | 0.09% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-mixed pattern]` | 2.4269275341095224e-05 | 2.411820888280272e-05 | 0.62% | 0.63% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-multiples of 0x10]` | 2.401773501443647e-05 | 2.3950899891608617e-05 | 0.28% | 0.28% | 1.00x | ✅ |
| `hexbytes_getitem_index[5-palindrome ascii]` | 2.4164944565324954e-05 | 2.3928678680775606e-05 | 0.98% | 0.99% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-palindrome]` | 2.4267999639773915e-05 | 2.391634827519188e-05 | 1.45% | 1.47% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-repeated 0-9]` | 2.422771548511237e-05 | 2.3915400170784544e-05 | 1.29% | 1.31% | 1.01x | ✅ |
| `hexbytes_getitem_index[5-two patterns]` | 2.4205931628948855e-05 | 2.396601825956672e-05 | 0.99% | 1.00% | 1.01x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-0-9]` | 8.250186693639442e-05 | 5.828520845185435e-05 | 29.35% | 41.55% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-4-byte pattern]` | 8.291220320668983e-05 | 5.926334226686405e-05 | 28.52% | 39.90% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-all byte values]` | 8.284152209995381e-05 | 5.91411888552348e-05 | 28.61% | 40.07% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0x00/0xff]` | 8.344100184393069e-05 | 5.8385547014977976e-05 | 30.03% | 42.91% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-alternating 0xaa/0x55]` | 8.253473081456478e-05 | 5.8363271593771964e-05 | 29.29% | 41.42% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-ascii sentence]` | 8.358777353823913e-05 | 5.8554599841501924e-05 | 29.95% | 42.75% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'']` | 8.002715314410303e-05 | 5.5967865732017556e-05 | 30.06% | 42.99% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00'*32]` | 8.306308955307898e-05 | 5.874615648613931e-05 | 29.28% | 41.39% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x00\\xff\\x00\\xff']` | 8.276030328588359e-05 | 5.826633272866267e-05 | 29.60% | 42.04% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*100]` | 8.219269331848519e-05 | 5.866369774232127e-05 | 28.63% | 40.11% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01'*2048]` | 8.317657823024596e-05 | 5.88952661636109e-05 | 29.19% | 41.23% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x01\\x02\\x03']` | 8.300582796338871e-05 | 5.8452305164304114e-05 | 29.58% | 42.01% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.272796758210088e-05 | 5.96988381059142e-05 | 27.84% | 38.58% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x7f'*8]` | 8.305552962364257e-05 | 5.844924301307225e-05 | 29.63% | 42.10% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\x80'*8]` | 8.277345306094644e-05 | 5.875150184549246e-05 | 29.02% | 40.89% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xde\\xad\\xbe\\xef']` | 8.287488037564238e-05 | 5.8628783412722554e-05 | 29.26% | 41.36% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'\\xff'*64]` | 8.304070837264691e-05 | 5.834060086668151e-05 | 29.74% | 42.34% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'a'*1024]` | 8.31825347147647e-05 | 5.958207442005223e-05 | 28.37% | 39.61% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-b'abc']` | 8.385384984880424e-05 | 5.7940482619297395e-05 | 30.90% | 44.72% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-long alternating]` | 8.319281987596273e-05 | 5.911603564730125e-05 | 28.94% | 40.73% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-mixed pattern]` | 8.323045260459832e-05 | 5.8672736764324764e-05 | 29.51% | 41.86% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-multiples of 0x10]` | 8.334166742514785e-05 | 5.7960948111305165e-05 | 30.45% | 43.79% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome ascii]` | 8.322743378481302e-05 | 5.8819202103176256e-05 | 29.33% | 41.50% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome numeric]` | 8.299476607974302e-05 | 5.868279135702008e-05 | 29.29% | 41.43% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-palindrome]` | 8.274129522751287e-05 | 5.930288920540792e-05 | 28.33% | 39.52% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-repeated 0-9]` | 8.26105152926974e-05 | 5.7983791621045506e-05 | 29.81% | 42.47% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single 0xff]` | 8.037755697862592e-05 | 5.602226201680224e-05 | 30.30% | 43.47% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-single null byte]` | 8.13374609224853e-05 | 5.616318973661657e-05 | 30.95% | 44.82% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(-3,None)-two patterns]` | 8.38071196259023e-05 | 5.868349424297856e-05 | 29.98% | 42.81% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-0-9]` | 8.36100191656335e-05 | 5.916539581011796e-05 | 29.24% | 41.32% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-4-byte pattern]` | 8.522241497686634e-05 | 5.883738170010797e-05 | 30.96% | 44.84% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-all byte values]` | 8.432303209331615e-05 | 5.871996668102642e-05 | 30.36% | 43.60% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0x00/0xff]` | 8.276773486683813e-05 | 5.8806026744172834e-05 | 28.95% | 40.75% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-alternating 0xaa/0x55]` | 8.37260158755725e-05 | 6.001969772172055e-05 | 28.31% | 39.50% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-ascii sentence]` | 8.403358441993596e-05 | 5.872225256509412e-05 | 30.12% | 43.10% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'']` | 8.021083377848977e-05 | 5.67749506404371e-05 | 29.22% | 41.28% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00'*32]` | 8.319859977259243e-05 | 5.918082197496422e-05 | 28.87% | 40.58% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x00\\xff\\x00\\xff']` | 8.332995957227449e-05 | 5.924744891274557e-05 | 28.90% | 40.65% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*100]` | 8.374296317214534e-05 | 5.937066372449662e-05 | 29.10% | 41.05% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01'*2048]` | 8.379493916309646e-05 | 5.9411231631933304e-05 | 29.10% | 41.04% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x01\\x02\\x03']` | 8.381921724699904e-05 | 5.993627416742921e-05 | 28.49% | 39.85% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.303493965414382e-05 | 5.881098852179199e-05 | 29.17% | 41.19% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x7f'*8]` | 8.326458853916877e-05 | 5.9696512290281755e-05 | 28.31% | 39.48% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\x80'*8]` | 8.389369761236174e-05 | 5.947184688407112e-05 | 29.11% | 41.06% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xde\\xad\\xbe\\xef']` | 8.339200731000018e-05 | 5.966957326887018e-05 | 28.45% | 39.76% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'\\xff'*64]` | 8.336654989420485e-05 | 5.931965016969141e-05 | 28.84% | 40.54% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'a'*1024]` | 8.309335019783662e-05 | 5.903901614684794e-05 | 28.95% | 40.74% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-b'abc']` | 8.320532664993671e-05 | 6.001324022032207e-05 | 27.87% | 38.64% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-long alternating]` | 8.310044689801618e-05 | 5.9294331896814365e-05 | 28.65% | 40.15% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-mixed pattern]` | 8.38097288466494e-05 | 5.914920168702407e-05 | 29.42% | 41.69% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-multiples of 0x10]` | 8.326491223911553e-05 | 5.880529508986977e-05 | 29.38% | 41.59% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome ascii]` | 8.428992027005495e-05 | 5.918070047350809e-05 | 29.79% | 42.43% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome numeric]` | 8.443085913937037e-05 | 5.87962355987626e-05 | 30.36% | 43.60% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-palindrome]` | 8.338211023054695e-05 | 5.9714233270492804e-05 | 28.38% | 39.64% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-repeated 0-9]` | 8.447813702382508e-05 | 5.9155558433860994e-05 | 29.98% | 42.81% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single 0xff]` | 8.15787575110131e-05 | 5.696559522814699e-05 | 30.17% | 43.21% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-single null byte]` | 8.237607556440639e-05 | 5.674983636076086e-05 | 31.11% | 45.16% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(0,3)-two patterns]` | 8.380793146704741e-05 | 5.906753233211117e-05 | 29.52% | 41.88% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-0-9]` | 8.390486680934052e-05 | 5.864969658381796e-05 | 30.10% | 43.06% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-4-byte pattern]` | 8.361406569984367e-05 | 5.9525712814294186e-05 | 28.81% | 40.47% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-all byte values]` | 8.427388066435458e-05 | 6.0217776386335555e-05 | 28.55% | 39.95% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0x00/0xff]` | 8.3779946759045e-05 | 5.898306106669132e-05 | 29.60% | 42.04% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-alternating 0xaa/0x55]` | 8.360011298139995e-05 | 5.892836275223156e-05 | 29.51% | 41.87% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-ascii sentence]` | 8.508790226448962e-05 | 5.8850316882942596e-05 | 30.84% | 44.58% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'']` | 8.189995855253323e-05 | 5.642017031664902e-05 | 31.11% | 45.16% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00'*32]` | 8.389486089438703e-05 | 5.885907234785025e-05 | 29.84% | 42.54% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x00\\xff\\x00\\xff']` | 8.384831877594848e-05 | 5.9193866414839823e-05 | 29.40% | 41.65% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*100]` | 8.421504472219594e-05 | 5.8960981994662165e-05 | 29.99% | 42.83% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01'*2048]` | 8.439535315424278e-05 | 5.9947913148859045e-05 | 28.97% | 40.78% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x01\\x02\\x03']` | 8.57201389054439e-05 | 5.8865738708508805e-05 | 31.33% | 45.62% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.587315199682517e-05 | 5.9181916073474566e-05 | 31.08% | 45.10% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x7f'*8]` | 8.361974259363785e-05 | 5.9407277309040296e-05 | 28.96% | 40.76% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\x80'*8]` | 8.478055671763217e-05 | 5.954455360701716e-05 | 29.77% | 42.38% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xde\\xad\\xbe\\xef']` | 8.425646375168484e-05 | 5.942804152999908e-05 | 29.47% | 41.78% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'\\xff'*64]` | 8.469496940376657e-05 | 5.910181319140053e-05 | 30.22% | 43.30% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'a'*1024]` | 8.450602057442368e-05 | 5.9102434399232125e-05 | 30.06% | 42.98% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-b'abc']` | 8.460710828269475e-05 | 5.909771236126198e-05 | 30.15% | 43.16% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-long alternating]` | 8.426816673908078e-05 | 5.977126406487705e-05 | 29.07% | 40.98% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-mixed pattern]` | 8.404442909898705e-05 | 5.946075109021313e-05 | 29.25% | 41.34% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-multiples of 0x10]` | 8.366508865332517e-05 | 5.8222329118937296e-05 | 30.41% | 43.70% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome ascii]` | 8.386964299741796e-05 | 5.8879075095859364e-05 | 29.80% | 42.44% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome numeric]` | 8.353255472585522e-05 | 5.909213254630639e-05 | 29.26% | 41.36% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-palindrome]` | 8.423689992264663e-05 | 5.878332465846351e-05 | 30.22% | 43.30% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-repeated 0-9]` | 8.416827004377143e-05 | 5.7725207196164916e-05 | 31.42% | 45.81% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single 0xff]` | 8.164500803906384e-05 | 5.6339571650682544e-05 | 30.99% | 44.92% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-single null byte]` | 8.099110204261756e-05 | 5.591279681470377e-05 | 30.96% | 44.85% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(1,6)-two patterns]` | 8.386328190481711e-05 | 5.890585978354872e-05 | 29.76% | 42.37% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-0-9]` | 8.298618674148833e-05 | 5.7865465356442226e-05 | 30.27% | 43.41% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-4-byte pattern]` | 8.330539988035791e-05 | 5.9577603209186664e-05 | 28.48% | 39.83% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-all byte values]` | 8.383976475579728e-05 | 5.921775038430276e-05 | 29.37% | 41.58% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0x00/0xff]` | 8.348176591130696e-05 | 5.928939331675581e-05 | 28.98% | 40.80% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-alternating 0xaa/0x55]` | 8.357272990843464e-05 | 5.8497554936395135e-05 | 30.00% | 42.87% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-ascii sentence]` | 8.44821411183437e-05 | 5.8434257816204275e-05 | 30.83% | 44.58% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'']` | 8.148034622682148e-05 | 5.594760201905762e-05 | 31.34% | 45.64% | 1.46x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00'*32]` | 8.277017562178232e-05 | 5.83531083397578e-05 | 29.50% | 41.84% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x00\\xff\\x00\\xff']` | 8.316322681297265e-05 | 5.990197805017856e-05 | 27.97% | 38.83% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*100]` | 8.353059579527556e-05 | 5.8760497210633275e-05 | 29.65% | 42.15% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01'*2048]` | 0.00010239844048713522 | 7.65652108803268e-05 | 25.23% | 33.74% | 1.34x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x01\\x02\\x03']` | 8.026528060811074e-05 | 5.584627265022057e-05 | 30.42% | 43.73% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.367800156934465e-05 | 5.835213706063646e-05 | 30.27% | 43.40% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x7f'*8]` | 8.274129229251666e-05 | 5.866249390208034e-05 | 29.10% | 41.05% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\x80'*8]` | 8.370510805762868e-05 | 5.868240363692039e-05 | 29.89% | 42.64% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xde\\xad\\xbe\\xef']` | 8.305843151754047e-05 | 5.840975956556403e-05 | 29.68% | 42.20% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'\\xff'*64]` | 8.321982900811854e-05 | 5.881176784465988e-05 | 29.33% | 41.50% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'a'*1024]` | 9.990756608863771e-05 | 7.380496114971907e-05 | 26.13% | 35.37% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-b'abc']` | 8.000411966313441e-05 | 5.595922868206507e-05 | 30.05% | 42.97% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-long alternating]` | 9.870233603093144e-05 | 6.973124983574094e-05 | 29.35% | 41.55% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-mixed pattern]` | 8.271447637693706e-05 | 5.934382686528763e-05 | 28.25% | 39.38% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-multiples of 0x10]` | 8.270868818833776e-05 | 5.82249137941675e-05 | 29.60% | 42.05% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome ascii]` | 8.33033023233647e-05 | 5.898778126788932e-05 | 29.19% | 41.22% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome numeric]` | 8.252765764508476e-05 | 5.88008242991e-05 | 28.75% | 40.35% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-palindrome]` | 8.276499418044653e-05 | 5.7063338467920946e-05 | 31.05% | 45.04% | 1.45x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-repeated 0-9]` | 8.270716188865253e-05 | 5.9111647394270866e-05 | 28.53% | 39.92% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single 0xff]` | 8.049794441180874e-05 | 5.584619123752964e-05 | 30.62% | 44.14% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-single null byte]` | 7.877554066306334e-05 | 5.5814622766636814e-05 | 29.15% | 41.14% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(2,None)-two patterns]` | 8.27168312345602e-05 | 5.918237985272967e-05 | 28.45% | 39.77% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-0-9]` | 8.098599105647256e-05 | 5.663551676375733e-05 | 30.07% | 43.00% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-4-byte pattern]` | 8.254878370312027e-05 | 5.856872194605713e-05 | 29.05% | 40.94% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-all byte values]` | 8.175664714682908e-05 | 5.768633767279256e-05 | 29.44% | 41.73% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0x00/0xff]` | 8.002661479167363e-05 | 5.7070126360447314e-05 | 28.69% | 40.23% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-alternating 0xaa/0x55]` | 8.218134726154999e-05 | 5.7751321605984434e-05 | 29.73% | 42.30% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-ascii sentence]` | 8.15637867598716e-05 | 5.769566961891971e-05 | 29.26% | 41.37% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'']` | 7.875826492023574e-05 | 5.466611443617268e-05 | 30.59% | 44.07% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00'*32]` | 8.09050595174135e-05 | 5.801024789963897e-05 | 28.30% | 39.47% | 1.39x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x00\\xff\\x00\\xff']` | 8.022136341117286e-05 | 5.7141190291371264e-05 | 28.77% | 40.39% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*100]` | 8.087860527167773e-05 | 5.749647655434882e-05 | 28.91% | 40.67% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01'*2048]` | 0.00010306877300405021 | 7.942643362244231e-05 | 22.94% | 29.77% | 1.30x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x01\\x02\\x03']` | 8.072741855620154e-05 | 5.7214426360675536e-05 | 29.13% | 41.10% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x10\\x20\\x30\\x40\\x50']` | 8.057290716664274e-05 | 5.7407693017681755e-05 | 28.75% | 40.35% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x7f'*8]` | 8.049137004563495e-05 | 5.709559474471898e-05 | 29.07% | 40.98% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\x80'*8]` | 8.025098451101865e-05 | 5.711845711701976e-05 | 28.83% | 40.50% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xde\\xad\\xbe\\xef']` | 8.143347007282717e-05 | 5.692988355511063e-05 | 30.09% | 43.04% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'\\xff'*64]` | 8.138026068102279e-05 | 5.753679762678322e-05 | 29.30% | 41.44% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'a'*1024]` | 9.703363735595271e-05 | 6.909045132749846e-05 | 28.80% | 40.44% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-b'abc']` | 8.048847517605067e-05 | 5.7339042182571334e-05 | 28.76% | 40.37% | 1.40x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-long alternating]` | 9.898504879324252e-05 | 7.358151686145636e-05 | 25.66% | 34.52% | 1.35x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-mixed pattern]` | 8.201093075528659e-05 | 5.769127703907754e-05 | 29.65% | 42.15% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-multiples of 0x10]` | 8.058141504438412e-05 | 5.7076835942244713e-05 | 29.17% | 41.18% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome ascii]` | 8.145502650115277e-05 | 5.718940376002633e-05 | 29.79% | 42.43% | 1.42x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome numeric]` | 8.149502722129318e-05 | 5.6971633221505884e-05 | 30.09% | 43.04% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-palindrome]` | 8.06100090818015e-05 | 5.70048474406266e-05 | 29.28% | 41.41% | 1.41x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-repeated 0-9]` | 8.226054709431045e-05 | 5.727037153151917e-05 | 30.38% | 43.64% | 1.44x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single 0xff]` | 7.90391789004934e-05 | 5.511655146543588e-05 | 30.27% | 43.40% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-single null byte]` | 7.882674650514174e-05 | 5.5123192853421086e-05 | 30.07% | 43.00% | 1.43x | ✅ |
| `hexbytes_getitem_slice[slice(None,None)-two patterns]` | 8.183571892007773e-05 | 5.757317879739492e-05 | 29.65% | 42.14% | 1.42x | ✅ |
| `hexbytes_new['']` | 7.52174597759598e-05 | 3.838792304711492e-05 | 48.96% | 95.94% | 1.96x | ✅ |
| `hexbytes_new['0x'+'00'*64]` | 9.38413214074017e-05 | 4.9218621567897455e-05 | 47.55% | 90.66% | 1.91x | ✅ |
| `hexbytes_new['0x'+'a'*128]` | 9.362193330729182e-05 | 4.9663626491796255e-05 | 46.95% | 88.51% | 1.89x | ✅ |
| `hexbytes_new['0x'+'ff'*32]` | 9.032680305073634e-05 | 4.6470948945594826e-05 | 48.55% | 94.37% | 1.94x | ✅ |
| `hexbytes_new['0x']` | 7.983869868038094e-05 | 3.859989636471983e-05 | 51.65% | 106.84% | 2.07x | ✅ |
| `hexbytes_new['0x1234']` | 8.869376000004292e-05 | 4.504558409573394e-05 | 49.21% | 96.90% | 1.97x | ✅ |
| `hexbytes_new['0xCAFEBABE']` | 8.838776706628181e-05 | 4.445450854631892e-05 | 49.71% | 98.83% | 1.99x | ✅ |
| `hexbytes_new['0xabcdef']` | 8.846409260085801e-05 | 4.47030967850333e-05 | 49.47% | 97.89% | 1.98x | ✅ |
| `hexbytes_new['0xdeadbeef']` | 8.846382792629317e-05 | 4.338190867981519e-05 | 50.96% | 103.92% | 2.04x | ✅ |
| `hexbytes_new['abc']` | 8.576856874743459e-05 | 4.6849673612371433e-05 | 45.38% | 83.07% | 1.83x | ✅ |
| `hexbytes_new['deadbeef']` | 7.849050651603559e-05 | 4.223444639035983e-05 | 46.19% | 85.84% | 1.86x | ✅ |
| `hexbytes_new[0-9]` | 4.31113079508122e-05 | 2.622396426514134e-05 | 39.17% | 64.40% | 1.64x | ✅ |
| `hexbytes_new[0]` | 0.00012447728347287512 | 6.190725796485717e-05 | 50.27% | 101.07% | 2.01x | ✅ |
| `hexbytes_new[123456]` | 0.00012911586660386418 | 6.612219676826264e-05 | 48.79% | 95.27% | 1.95x | ✅ |
| `hexbytes_new[2**16]` | 0.0001283843417492969 | 6.641083903495655e-05 | 48.27% | 93.32% | 1.93x | ✅ |
| `hexbytes_new[2**256-1]` | 0.00013253604855303032 | 7.477285403247207e-05 | 43.58% | 77.25% | 1.77x | ✅ |
| `hexbytes_new[2**32]` | 0.0001314532418371478 | 6.920694740423583e-05 | 47.35% | 89.94% | 1.90x | ✅ |
| `hexbytes_new[2**64]` | 0.0001320499596236909 | 7.14682959731507e-05 | 45.88% | 84.77% | 1.85x | ✅ |
| `hexbytes_new[2**8]` | 0.0001272415881112714 | 6.39374958943081e-05 | 49.75% | 99.01% | 1.99x | ✅ |
| `hexbytes_new[4-byte pattern]` | 4.3289453427939616e-05 | 2.6373463828142543e-05 | 39.08% | 64.14% | 1.64x | ✅ |
| `hexbytes_new[False]` | 6.046396969684663e-05 | 2.7356857527896426e-05 | 54.76% | 121.02% | 2.21x | ✅ |
| `hexbytes_new[True]` | 6.0717739452982964e-05 | 2.7449578629888186e-05 | 54.79% | 121.20% | 2.21x | ✅ |
| `hexbytes_new[all byte values]` | 4.3023829011826734e-05 | 2.6553988820559553e-05 | 38.28% | 62.02% | 1.62x | ✅ |
| `hexbytes_new[alternating 0x00/0xff]` | 4.351081190501106e-05 | 2.6490279363316482e-05 | 39.12% | 64.25% | 1.64x | ✅ |
| `hexbytes_new[alternating 0xaa/0x55]` | 4.3640462328408754e-05 | 2.632403523130561e-05 | 39.68% | 65.78% | 1.66x | ✅ |
| `hexbytes_new[ascii sentence]` | 4.35764337273705e-05 | 2.6357704792062604e-05 | 39.51% | 65.33% | 1.65x | ✅ |
| `hexbytes_new[b'']` | 4.377831815148083e-05 | 2.625822464448478e-05 | 40.02% | 66.72% | 1.67x | ✅ |
| `hexbytes_new[b'\\x00'*32]` | 4.3493301229565446e-05 | 2.6439471731924633e-05 | 39.21% | 64.50% | 1.65x | ✅ |
| `hexbytes_new[b'\\x00\\xff\\x00\\xff']` | 4.4308902219018486e-05 | 2.6253118669035753e-05 | 40.75% | 68.78% | 1.69x | ✅ |
| `hexbytes_new[b'\\x01'*100]` | 4.4029491526050725e-05 | 2.6613025810773875e-05 | 39.56% | 65.44% | 1.65x | ✅ |
| `hexbytes_new[b'\\x01'*2048]` | 5.7023419177613084e-05 | 3.789036887511705e-05 | 33.55% | 50.50% | 1.50x | ✅ |
| `hexbytes_new[b'\\x01\\x02\\x03']` | 4.3693113835878844e-05 | 2.6446344380552037e-05 | 39.47% | 65.21% | 1.65x | ✅ |
| `hexbytes_new[b'\\x10\\x20\\x30\\x40\\x50']` | 4.327744715388733e-05 | 2.6302129941937405e-05 | 39.22% | 64.54% | 1.65x | ✅ |
| `hexbytes_new[b'\\x7f'*8]` | 4.3586983493284593e-05 | 2.6157931826758218e-05 | 39.99% | 66.63% | 1.67x | ✅ |
| `hexbytes_new[b'\\x80'*8]` | 4.2835635736885273e-05 | 2.6228339824058318e-05 | 38.77% | 63.32% | 1.63x | ✅ |
| `hexbytes_new[b'\\xde\\xad\\xbe\\xef']` | 4.407095914497479e-05 | 2.640159678637031e-05 | 40.09% | 66.93% | 1.67x | ✅ |
| `hexbytes_new[b'\\xff'*64]` | 4.433912761356296e-05 | 2.6349768295728278e-05 | 40.57% | 68.27% | 1.68x | ✅ |
| `hexbytes_new[b'a'*1024]` | 5.1107174711363775e-05 | 3.0659935638781586e-05 | 40.01% | 66.69% | 1.67x | ✅ |
| `hexbytes_new[b'abc']` | 4.3148803563726526e-05 | 2.6285381917374038e-05 | 39.08% | 64.16% | 1.64x | ✅ |
| `hexbytes_new[bytearray(0-9)]` | 6.938005509348966e-05 | 3.811957798629365e-05 | 45.06% | 82.01% | 1.82x | ✅ |
| `hexbytes_new[bytearray(4-byte pattern)]` | 7.041237376920297e-05 | 3.826402684295822e-05 | 45.66% | 84.02% | 1.84x | ✅ |
| `hexbytes_new[bytearray(all byte values)]` | 7.096494499657869e-05 | 3.842911389721914e-05 | 45.85% | 84.66% | 1.85x | ✅ |
| `hexbytes_new[bytearray(alternating 0x00/0xff)]` | 7.04635955460178e-05 | 3.839688015431254e-05 | 45.51% | 83.51% | 1.84x | ✅ |
| `hexbytes_new[bytearray(alternating 0xaa/0x55)]` | 7.064570300675555e-05 | 3.838832627515369e-05 | 45.66% | 84.03% | 1.84x | ✅ |
| `hexbytes_new[bytearray(ascii sentence)]` | 7.014800988529509e-05 | 3.835138673408243e-05 | 45.33% | 82.91% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'')]` | 6.839553415141606e-05 | 3.57344641622665e-05 | 47.75% | 91.40% | 1.91x | ✅ |
| `hexbytes_new[bytearray(b'\\x00'*32)]` | 6.980450806665605e-05 | 3.8371229957173545e-05 | 45.03% | 81.92% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x00\\xff\\x00\\xff')]` | 6.977384287604221e-05 | 3.8116641848787646e-05 | 45.37% | 83.05% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*100)]` | 7.068126570401613e-05 | 3.841906325747122e-05 | 45.64% | 83.97% | 1.84x | ✅ |
| `hexbytes_new[bytearray(b'\\x01'*2048)]` | 9.178803734022524e-05 | 5.759295801821859e-05 | 37.25% | 59.37% | 1.59x | ✅ |
| `hexbytes_new[bytearray(b'\\x01\\x02\\x03')]` | 6.917910482038863e-05 | 3.8210268446976435e-05 | 44.77% | 81.05% | 1.81x | ✅ |
| `hexbytes_new[bytearray(b'\\x10\\x20\\x30\\x40\\x50')]` | 7.02236278915295e-05 | 3.842185875134762e-05 | 45.29% | 82.77% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\x7f'*8)]` | 6.958838268843766e-05 | 3.820134296706241e-05 | 45.10% | 82.16% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\x80'*8)]` | 6.911448959610086e-05 | 3.805829682076758e-05 | 44.93% | 81.60% | 1.82x | ✅ |
| `hexbytes_new[bytearray(b'\\xde\\xad\\xbe\\xef')]` | 6.983445988818147e-05 | 3.824766613680322e-05 | 45.23% | 82.58% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'\\xff'*64)]` | 7.011997888675728e-05 | 3.834374903883333e-05 | 45.32% | 82.87% | 1.83x | ✅ |
| `hexbytes_new[bytearray(b'a'*1024)]` | 8.492489890159476e-05 | 5.065164217110369e-05 | 40.36% | 67.66% | 1.68x | ✅ |
| `hexbytes_new[bytearray(b'abc')]` | 6.900177112042789e-05 | 3.84678270053058e-05 | 44.25% | 79.38% | 1.79x | ✅ |
| `hexbytes_new[bytearray(long alternating)]` | 8.580438301680658e-05 | 5.111873678693686e-05 | 40.42% | 67.85% | 1.68x | ✅ |
| `hexbytes_new[bytearray(mixed pattern)]` | 7.074497074112684e-05 | 3.869922371770529e-05 | 45.30% | 82.81% | 1.83x | ✅ |
| `hexbytes_new[bytearray(multiples of 0x10)]` | 7.024910013912437e-05 | 3.817510249176436e-05 | 45.66% | 84.02% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome ascii)]` | 6.981264634759926e-05 | 3.84895224154981e-05 | 44.87% | 81.38% | 1.81x | ✅ |
| `hexbytes_new[bytearray(palindrome numeric)]` | 6.981331625048118e-05 | 3.792451381378454e-05 | 45.68% | 84.08% | 1.84x | ✅ |
| `hexbytes_new[bytearray(palindrome)]` | 7.04445452599693e-05 | 3.823736460886293e-05 | 45.72% | 84.23% | 1.84x | ✅ |
| `hexbytes_new[bytearray(repeated 0-9)]` | 7.085809707346035e-05 | 3.848671668729687e-05 | 45.68% | 84.11% | 1.84x | ✅ |
| `hexbytes_new[bytearray(single 0xff)]` | 7.003704764405978e-05 | 3.863413704702969e-05 | 44.84% | 81.28% | 1.81x | ✅ |
| `hexbytes_new[bytearray(single null byte)]` | 6.929154155892127e-05 | 3.875370493993037e-05 | 44.07% | 78.80% | 1.79x | ✅ |
| `hexbytes_new[bytearray(two patterns)]` | 7.054412132706945e-05 | 3.831098775720452e-05 | 45.69% | 84.14% | 1.84x | ✅ |
| `hexbytes_new[long alternating]` | 5.041408526910434e-05 | 3.068545001337548e-05 | 39.13% | 64.29% | 1.64x | ✅ |
| `hexbytes_new[memoryview(0-9)]` | 8.548482174536591e-05 | 4.3100926245916714e-05 | 49.58% | 98.34% | 1.98x | ✅ |
| `hexbytes_new[memoryview(4-byte pattern)]` | 8.607798586353024e-05 | 4.390161674806478e-05 | 49.00% | 96.07% | 1.96x | ✅ |
| `hexbytes_new[memoryview(all byte values)]` | 8.589568026857832e-05 | 4.367881071684638e-05 | 49.15% | 96.65% | 1.97x | ✅ |
| `hexbytes_new[memoryview(alternating 0x00/0xff)]` | 8.575617502723795e-05 | 4.345436781347358e-05 | 49.33% | 97.35% | 1.97x | ✅ |
| `hexbytes_new[memoryview(alternating 0xaa/0x55)]` | 8.679718583056859e-05 | 4.366935941379195e-05 | 49.69% | 98.76% | 1.99x | ✅ |
| `hexbytes_new[memoryview(ascii sentence)]` | 8.554618241568953e-05 | 4.3876405176639796e-05 | 48.71% | 94.97% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'')]` | 8.392362484824262e-05 | 4.112715401216441e-05 | 50.99% | 104.06% | 2.04x | ✅ |
| `hexbytes_new[memoryview(b'\\x00'*32)]` | 8.648042759666578e-05 | 4.581598569993427e-05 | 47.02% | 88.76% | 1.89x | ✅ |
| `hexbytes_new[memoryview(b'\\x00\\xff\\x00\\xff')]` | 8.662452830503228e-05 | 4.3210357717739525e-05 | 50.12% | 100.47% | 2.00x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*100)]` | 8.608617430210006e-05 | 4.387130909016385e-05 | 49.04% | 96.22% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x01'*2048)]` | 0.0001069410920534598 | 6.452469191738684e-05 | 39.66% | 65.74% | 1.66x | ✅ |
| `hexbytes_new[memoryview(b'\\x01\\x02\\x03')]` | 8.494474415276615e-05 | 4.3829108890181346e-05 | 48.40% | 93.81% | 1.94x | ✅ |
| `hexbytes_new[memoryview(b'\\x10\\x20\\x30\\x40\\x50')]` | 8.410678669471166e-05 | 4.3062863332498145e-05 | 48.80% | 95.31% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\x7f'*8)]` | 8.52594785425842e-05 | 4.3506990338933926e-05 | 48.97% | 95.97% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\x80'*8)]` | 8.549325131808878e-05 | 4.359189206074236e-05 | 49.01% | 96.12% | 1.96x | ✅ |
| `hexbytes_new[memoryview(b'\\xde\\xad\\xbe\\xef')]` | 8.488324995583185e-05 | 4.3463386552761114e-05 | 48.80% | 95.30% | 1.95x | ✅ |
| `hexbytes_new[memoryview(b'\\xff'*64)]` | 8.584419456386491e-05 | 4.343431224960677e-05 | 49.40% | 97.64% | 1.98x | ✅ |
| `hexbytes_new[memoryview(b'a'*1024)]` | 0.00010035126120578987 | 5.813446256199048e-05 | 42.07% | 72.62% | 1.73x | ✅ |
| `hexbytes_new[memoryview(b'abc')]` | 8.530041352377672e-05 | 4.3972192964316934e-05 | 48.45% | 93.99% | 1.94x | ✅ |
| `hexbytes_new[memoryview(long alternating)]` | 0.0001005784849001093 | 5.790095914647352e-05 | 42.43% | 73.71% | 1.74x | ✅ |
| `hexbytes_new[memoryview(mixed pattern)]` | 8.544086233768307e-05 | 4.42722062060617e-05 | 48.18% | 92.99% | 1.93x | ✅ |
| `hexbytes_new[memoryview(multiples of 0x10)]` | 8.555421578332518e-05 | 4.344994107651766e-05 | 49.21% | 96.90% | 1.97x | ✅ |
| `hexbytes_new[memoryview(palindrome ascii)]` | 8.527968356002521e-05 | 4.2860123592653086e-05 | 49.74% | 98.97% | 1.99x | ✅ |
| `hexbytes_new[memoryview(palindrome numeric)]` | 8.470591310479637e-05 | 4.3762255609226336e-05 | 48.34% | 93.56% | 1.94x | ✅ |
| `hexbytes_new[memoryview(palindrome)]` | 8.417897689545034e-05 | 4.332947461652795e-05 | 48.53% | 94.28% | 1.94x | ✅ |
| `hexbytes_new[memoryview(repeated 0-9)]` | 8.573028240254309e-05 | 4.369905286749289e-05 | 49.03% | 96.18% | 1.96x | ✅ |
| `hexbytes_new[memoryview(single 0xff)]` | 8.332663942519085e-05 | 4.327979053797959e-05 | 48.06% | 92.53% | 1.93x | ✅ |
| `hexbytes_new[memoryview(single null byte)]` | 8.499284410710572e-05 | 4.4210841365866326e-05 | 47.98% | 92.24% | 1.92x | ✅ |
| `hexbytes_new[memoryview(two patterns)]` | 8.514917837454341e-05 | 4.3498065799664975e-05 | 48.92% | 95.75% | 1.96x | ✅ |
| `hexbytes_new[mixed pattern]` | 4.369946123475703e-05 | 2.6685088679404948e-05 | 38.93% | 63.76% | 1.64x | ✅ |
| `hexbytes_new[multiples of 0x10]` | 4.3263812780653926e-05 | 2.6447365444187128e-05 | 38.87% | 63.58% | 1.64x | ✅ |
| `hexbytes_new[palindrome ascii]` | 4.230207383530355e-05 | 2.630475336569068e-05 | 37.82% | 60.82% | 1.61x | ✅ |
| `hexbytes_new[palindrome numeric]` | 4.327536857987521e-05 | 2.6508586640114993e-05 | 38.74% | 63.25% | 1.63x | ✅ |
| `hexbytes_new[palindrome]` | 4.44400833333031e-05 | 2.7308415216031354e-05 | 38.55% | 62.73% | 1.63x | ✅ |
| `hexbytes_new[repeated 0-9]` | 4.326599419930799e-05 | 2.6604047534639942e-05 | 38.51% | 62.63% | 1.63x | ✅ |
| `hexbytes_new[single 0xff]` | 4.3253806257573645e-05 | 2.6297438500127914e-05 | 39.20% | 64.48% | 1.64x | ✅ |
| `hexbytes_new[single null byte]` | 4.30768640386065e-05 | 2.6405853996995816e-05 | 38.70% | 63.13% | 1.63x | ✅ |
| `hexbytes_new[two patterns]` | 4.376327362844713e-05 | 2.6318458335620594e-05 | 39.86% | 66.28% | 1.66x | ✅ |
| `hexbytes_repr[0-9]` | 3.12088364910452e-05 | 1.4760000970704112e-05 | 52.71% | 111.44% | 2.11x | ✅ |
| `hexbytes_repr[4-byte pattern]` | 0.00012324107967623675 | 4.182055408579918e-05 | 66.07% | 194.69% | 2.95x | ✅ |
| `hexbytes_repr[all byte values]` | 0.00012323708776094386 | 4.179071358332528e-05 | 66.09% | 194.89% | 2.95x | ✅ |
| `hexbytes_repr[alternating 0x00/0xff]` | 5.130692450122519e-05 | 2.0049344653982014e-05 | 60.92% | 155.90% | 2.56x | ✅ |
| `hexbytes_repr[alternating 0xaa/0x55]` | 5.105882064795799e-05 | 2.0151762294406398e-05 | 60.53% | 153.37% | 2.53x | ✅ |
| `hexbytes_repr[ascii sentence]` | 4.291971468503188e-05 | 1.7918168438548103e-05 | 58.25% | 139.53% | 2.40x | ✅ |
| `hexbytes_repr[b'']` | 2.355992331263307e-05 | 1.1963814401170984e-05 | 49.22% | 96.93% | 1.97x | ✅ |
| `hexbytes_repr[b'\\x00'*32]` | 3.9322923154407586e-05 | 1.690576093357631e-05 | 57.01% | 132.60% | 2.33x | ✅ |
| `hexbytes_repr[b'\\x00\\xff\\x00\\xff']` | 3.0209837777323546e-05 | 1.4540802731396853e-05 | 51.87% | 107.76% | 2.08x | ✅ |
| `hexbytes_repr[b'\\x01'*100]` | 6.321355302137886e-05 | 2.384171975032187e-05 | 62.28% | 165.14% | 2.65x | ✅ |
| `hexbytes_repr[b'\\x01'*2048]` | 0.0007622576819959205 | 0.00022306772565732988 | 70.74% | 241.72% | 3.42x | ✅ |
| `hexbytes_repr[b'\\x01\\x02\\x03']` | 2.926038376845438e-05 | 1.4575567238990994e-05 | 50.19% | 100.75% | 2.01x | ✅ |
| `hexbytes_repr[b'\\x10\\x20\\x30\\x40\\x50']` | 3.0109579120980933e-05 | 1.4503306077970355e-05 | 51.83% | 107.60% | 2.08x | ✅ |
| `hexbytes_repr[b'\\x7f'*8]` | 3.1003660491057675e-05 | 1.4970092953910293e-05 | 51.72% | 107.10% | 2.07x | ✅ |
| `hexbytes_repr[b'\\x80'*8]` | 3.065789812724494e-05 | 1.4725608563725062e-05 | 51.97% | 108.19% | 2.08x | ✅ |
| `hexbytes_repr[b'\\xde\\xad\\xbe\\xef']` | 3.0109511937909435e-05 | 1.4543842605563791e-05 | 51.70% | 107.03% | 2.07x | ✅ |
| `hexbytes_repr[b'\\xff'*64]` | 5.1496908101897406e-05 | 2.008123386415744e-05 | 61.00% | 156.44% | 2.56x | ✅ |
| `hexbytes_repr[b'a'*1024]` | 0.00040001120282117 | 0.00011974637096711915 | 70.06% | 234.05% | 3.34x | ✅ |
| `hexbytes_repr[b'abc']` | 2.95383795054041e-05 | 1.4507403568343623e-05 | 50.89% | 103.61% | 2.04x | ✅ |
| `hexbytes_repr[long alternating]` | 0.00040009951446462184 | 0.00012289438290512923 | 69.28% | 225.56% | 3.26x | ✅ |
| `hexbytes_repr[mixed pattern]` | 9.972512789625356e-05 | 3.407099241635099e-05 | 65.84% | 192.70% | 2.93x | ✅ |
| `hexbytes_repr[multiples of 0x10]` | 3.1484321640362367e-05 | 1.501571230935446e-05 | 52.31% | 109.68% | 2.10x | ✅ |
| `hexbytes_repr[palindrome ascii]` | 3.0417230694459934e-05 | 1.4643557962343883e-05 | 51.86% | 107.72% | 2.08x | ✅ |
| `hexbytes_repr[palindrome numeric]` | 2.9883024163663907e-05 | 1.4568351306785261e-05 | 51.25% | 105.12% | 2.05x | ✅ |
| `hexbytes_repr[palindrome]` | 3.4523073360452046e-05 | 1.5594940922133373e-05 | 54.83% | 121.37% | 2.21x | ✅ |
| `hexbytes_repr[repeated 0-9]` | 6.354894239287296e-05 | 2.36944186311013e-05 | 62.71% | 168.20% | 2.68x | ✅ |
| `hexbytes_repr[single 0xff]` | 2.8615089502686017e-05 | 1.433816896868074e-05 | 49.89% | 99.57% | 2.00x | ✅ |
| `hexbytes_repr[single null byte]` | 2.8563032015833978e-05 | 1.3948841639327566e-05 | 51.16% | 104.77% | 2.05x | ✅ |
| `hexbytes_repr[two patterns]` | 5.1184962919702236e-05 | 1.9995535392090715e-05 | 60.93% | 155.98% | 2.56x | ✅ |
| `hexbytes_to_0x_hex[0-9]` | 1.6755707095506538e-05 | 1.4005231975577814e-05 | 16.42% | 19.64% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[4-byte pattern]` | 4.3038253825367026e-05 | 4.047886191791626e-05 | 5.95% | 6.32% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[all byte values]` | 4.3091922152291117e-05 | 4.050305371596113e-05 | 6.01% | 6.39% | 1.06x | ✅ |
| `hexbytes_to_0x_hex[alternating 0x00/0xff]` | 2.1787630048996797e-05 | 1.8463301129651853e-05 | 15.26% | 18.01% | 1.18x | ✅ |
| `hexbytes_to_0x_hex[alternating 0xaa/0x55]` | 2.1884043380158616e-05 | 1.8632430078169865e-05 | 14.86% | 17.45% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[ascii sentence]` | 2.032454001382322e-05 | 1.6460485568399306e-05 | 19.01% | 23.47% | 1.23x | ✅ |
| `hexbytes_to_0x_hex[b'']` | 1.10616676448667e-05 | 1.0855675725973552e-05 | 1.86% | 1.90% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00'*32]` | 1.8697712426382798e-05 | 1.527911272357336e-05 | 18.28% | 22.37% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x00\\xff\\x00\\xff']` | 1.6294471899964536e-05 | 1.336321912976635e-05 | 17.99% | 21.94% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*100]` | 2.5812373446804794e-05 | 2.2008332971799008e-05 | 14.74% | 17.28% | 1.17x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01'*2048]` | 0.00022446645849524355 | 0.00022170620444424867 | 1.23% | 1.25% | 1.01x | ✅ |
| `hexbytes_to_0x_hex[b'\\x01\\x02\\x03']` | 1.604582221195603e-05 | 1.3298394094591747e-05 | 17.12% | 20.66% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x10\\x20\\x30\\x40\\x50']` | 1.627718372608167e-05 | 1.345654618835242e-05 | 17.33% | 20.96% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\x7f'*8]` | 1.656806172122911e-05 | 1.3624766376099705e-05 | 17.76% | 21.60% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[b'\\x80'*8]` | 1.6440173482217922e-05 | 1.3753190532480882e-05 | 16.34% | 19.54% | 1.20x | ✅ |
| `hexbytes_to_0x_hex[b'\\xde\\xad\\xbe\\xef']` | 1.6205967051818176e-05 | 1.3413938376776738e-05 | 17.23% | 20.81% | 1.21x | ✅ |
| `hexbytes_to_0x_hex[b'\\xff'*64]` | 2.1872107683755704e-05 | 1.8912255395285362e-05 | 13.53% | 15.65% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[b'a'*1024]` | 0.00012368421262625817 | 0.0001240563780049868 | -0.30% | -0.30% | 1.00x | ❌ |
| `hexbytes_to_0x_hex[b'abc']` | 1.614212963834499e-05 | 1.3236138363800362e-05 | 18.00% | 21.95% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[long alternating]` | 0.00012369875053425028 | 0.00012181902171984434 | 1.52% | 1.54% | 1.02x | ✅ |
| `hexbytes_to_0x_hex[mixed pattern]` | 3.6403868601036905e-05 | 3.274493057733668e-05 | 10.05% | 11.17% | 1.11x | ✅ |
| `hexbytes_to_0x_hex[multiples of 0x10]` | 1.6765634491681234e-05 | 1.3734787490592142e-05 | 18.08% | 22.07% | 1.22x | ✅ |
| `hexbytes_to_0x_hex[palindrome ascii]` | 1.6657035189602297e-05 | 1.3468780844362943e-05 | 19.14% | 23.67% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[palindrome numeric]` | 1.655124859682745e-05 | 1.32934862091124e-05 | 19.68% | 24.51% | 1.25x | ✅ |
| `hexbytes_to_0x_hex[palindrome]` | 1.7561498459660097e-05 | 1.4178051054440596e-05 | 19.27% | 23.86% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[repeated 0-9]` | 2.5758390855710444e-05 | 2.2142487708136686e-05 | 14.04% | 16.33% | 1.16x | ✅ |
| `hexbytes_to_0x_hex[single 0xff]` | 1.599474227464177e-05 | 1.2825821947872656e-05 | 19.81% | 24.71% | 1.25x | ✅ |
| `hexbytes_to_0x_hex[single null byte]` | 1.5954565736158166e-05 | 1.2850222806385164e-05 | 19.46% | 24.16% | 1.24x | ✅ |
| `hexbytes_to_0x_hex[two patterns]` | 2.17542731198596e-05 | 1.8541962711241605e-05 | 14.77% | 17.32% | 1.17x | ✅ |
