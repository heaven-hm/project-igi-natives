# Editor reference provenance

Reference checkout: `/Users/haseeb-mir/Documents/Code/project-igi-editor`, revision `c506cd8305aad03dd3d9f24ea1546cbdef689e97`.

The native engine adapts recursive MEF attachment transforms and inverse-rest skeletal vertex placement from `source/renderer/renderer_objects_atta.cpp` and `source/renderer/renderer.cpp`. The editor renderer itself is not compiled or copied wholesale. Original converter parser files remain unchanged. Preserve the accompanying LICENSE, LICENSE_SCOPE.md and LICENSE-PRIOR notices.

Additional reference: `/Users/haseeb-mir/Documents/Code/open-igi`, revision `dade2b1a9c2c446462adf7d13a225926eabc96f0`: `Player/HumanView.cs`, `Player/HumanSoldierStates.cs`, `World/ObjectCollisionIndex.cs`, and `OpenIGI.Formats/World/MefCollisionMesh.cs`. Its license is retained at `../open_igi/LICENSE`. These implementation references do not independently prove original-game behavior. The original magicobj.qvm defines firing-only gun-flame types; TAMC portal metadata and the original soldier animation table support the adapters.
