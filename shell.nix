{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = [
    pkgs.nodejs
    pkgs.bashInteractive
  ];

  shellHook = ''
  '';
}

