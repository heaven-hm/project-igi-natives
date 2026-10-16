# Reused converter parsers

Copied directly from `/Users/haseeb-mir/Documents/Code/project-igi-converter/converters/source` on 2026-10-16 at the owner's request. The source folder has no Git metadata; `SOURCE_SHA256.txt` identifies the copied parser files.

MEF, TEX, RES, DAT, MTP, IFF, and QVM parsers retain their original code and headers. GLM 1.0.1 and its notice are included. Terrain record declarations are included for format reference. The engine provides a small compatible `Utils::Trim` header and routes the converter logger to timestamped engine diagnostics, excluding the converter's editor and operating-system helpers.

The surrounding engine checks asset sizes, paths, topology, and finite values before using parsed data. Upstream tests and successful asset conversion are useful evidence; this integration still needs its own malformed-input and real-level checks.

The converter license and license-scope notice are retained here. No game assets are included.
