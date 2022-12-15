module mux(
    input logic     s,
    input logic     d0,
    input logic     d1,
    output logic    en
);

    assign en = s ? d1 : d0;

endmodule
